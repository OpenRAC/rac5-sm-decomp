#!/usr/bin/env python3
"""Run the pinned complete-boot C gate with private inputs.

This checks compiler/object identities and the linked retail load image for
one boot-only accepted match. It does not identify the original compiler or
publish a ByteMatch report.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import subprocess
import sys
from pathlib import Path

from boot_c_campaign import ACCEPTED_SOURCES, REPLACEMENTS, source_path
from boot_witness_boundaries import WITNESS_NAMES
from compile_boot_trial import PROFILE, compile_objects
from elf import inspect_elf

ROOT = Path(__file__).resolve().parent.parent
EXPORT = ROOT / "build/boot-compiled-objects"
REPORT = ROOT / "build/boot-trial-gate/report.json"
ACCEPTED_NAME = "MEMCARD_Busy__Fv"


def accepted_body_bytes() -> int:
    if (ACCEPTED_SOURCES != frozenset({"memcard_busy"})
            or not source_path("memcard_busy").is_file()):
        raise ValueError("accepted boot source is missing or scope changed")
    catalogue = ROOT / "config/boot/witness_boundaries.tsv"
    with catalogue.open(encoding="utf-8", newline="") as file:
        rows = csv.DictReader((line for line in file if not line.startswith("#")),
                              delimiter="\t")
        matches = [row for row in rows if row["symbol"] == ACCEPTED_NAME]
    if len(matches) != 1 or int(matches[0]["body_bytes"]) != 16:
        raise ValueError("accepted boot function extent differs from reviewed 16 bytes")
    return 16


def run_tool(name: str, *arguments: str) -> None:
    script = ROOT / "tools" / name
    subprocess.run([sys.executable, str(script), *arguments], cwd=ROOT,
                   check=True)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("boot", type=Path)
    parser.add_argument("--cpp", type=Path, required=True)
    parser.add_argument("--cc1", type=Path, required=True)
    parser.add_argument("--as", dest="gnu_as", type=Path, required=True)
    parser.add_argument("--assembler", type=Path, required=True,
                        help="local SN PS2 EE assembler")
    parser.add_argument("--linker", type=Path, required=True,
                        help="local SN PS2 EE linker")
    parser.add_argument("--output-dir", type=Path, required=True,
                        help="native Linux directory for compiler intermediates")
    args = parser.parse_args()

    REPORT.parent.mkdir(parents=True, exist_ok=True)
    REPORT.write_text(json.dumps({"gate": "boot_trial", "status": "incomplete",
                                  "counted_matches": 0}, indent=2) + "\n",
                      encoding="utf-8", newline="\n")
    compile_objects(args.cpp, args.cc1, args.gnu_as, args.output_dir, EXPORT)
    boot = args.boot.resolve()
    run_tool("boot_symbols.py", "code-intervals", str(boot))
    run_tool("boot_dvp.py", "catalogue", str(boot))
    run_tool("boot_c_campaign.py", str(boot), "--objects-dir", str(EXPORT),
             "--assembler", str(args.assembler.resolve()),
             "--linker", str(args.linker.resolve()))
    linked = ROOT / "build/boot-c-campaign/boot_multi.elf"
    run_tool("boot_witness_boundaries.py", str(boot), str(linked))
    accepted_bytes = accepted_body_bytes()
    run_tool("boot_elf_pack.py", "catalogue", str(boot))
    run_tool("boot_elf_pack.py", "build", str(boot), "--linked", str(linked))
    packed = ROOT / "build/boot-elf-pack/boot_exact.elf"

    reference = inspect_elf(boot)
    candidate = inspect_elf(linked)
    complete = inspect_elf(packed)
    program = next(item for item in reference["programs"] if item["type"] == 1)
    raw = linked.read_bytes()[program["file_offset"]:
                              program["file_offset"] + program["file_size"]]
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    report = {
        "gate": "boot_trial",
        "status": "passed_boot_only",
        "profile": profile["id"],
        "boot_sha256": reference["sha256"],
        "candidate_objects": len(REPLACEMENTS),
        "candidate_functions": len(WITNESS_NAMES),
        "entry": candidate["entry"],
        "raw_load_size": program["file_size"],
        "raw_load_sha256": hashlib.sha256(raw).hexdigest(),
        "raw_load_and_header_exact": candidate["programs"] == reference["programs"],
        "whole_elf_exact": complete["sha256"] == reference["sha256"],
        "whole_elf_size": complete["file_size"],
        "whole_elf_sha256": complete["sha256"],
        "counted_matches": 1,
        "counted_bytes": accepted_bytes,
        "accepted_functions": [ACCEPTED_NAME],
        "note": "full ELF metadata was regenerated from the pinned numeric catalogue; non-code loaded data came from retail; original compiler identity and full gameplay remain unverified",
    }
    if not report["raw_load_and_header_exact"] or not report["whole_elf_exact"]:
        raise ValueError("gate report does not reflect the measured complete boot")
    REPORT.write_text(json.dumps(report, indent=2) + "\n",
                      encoding="utf-8", newline="\n")
    print(f"boot gate passed: {len(REPLACEMENTS)} exact objects, "
          f"{len(WITNESS_NAMES)} C witnesses, {program['file_size']} exact raw "
          f"load bytes and complete ELF exact; one boot-only match ({accepted_bytes} bytes)")


if __name__ == "__main__":
    main()
