#!/usr/bin/env python3
"""Run the complete pinned boot C *trial* gate with private inputs.

This checks compiler/object identities and the linked retail load image. It
does not qualify the original compiler, approve a function match, or create
a public progress report.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import subprocess
import sys
from pathlib import Path

from boot_c_campaign import REPLACEMENTS
from boot_witness_boundaries import WITNESS_NAMES
from compile_boot_trial import PROFILE, compile_objects
from elf import inspect_elf

ROOT = Path(__file__).resolve().parent.parent
EXPORT = ROOT / "build/boot-compiled-objects"
REPORT = ROOT / "build/boot-trial-gate/report.json"


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

    reference = inspect_elf(boot)
    candidate = inspect_elf(linked)
    program = next(item for item in reference["programs"] if item["type"] == 1)
    raw = linked.read_bytes()[program["file_offset"]:
                              program["file_offset"] + program["file_size"]]
    profile = json.loads(PROFILE.read_text(encoding="utf-8"))
    report = {
        "gate": "boot_trial",
        "status": "passed_provisional",
        "profile": profile["id"],
        "boot_sha256": reference["sha256"],
        "candidate_objects": len(REPLACEMENTS),
        "candidate_functions": len(WITNESS_NAMES),
        "entry": candidate["entry"],
        "raw_load_size": program["file_size"],
        "raw_load_sha256": hashlib.sha256(raw).hexdigest(),
        "raw_load_and_header_exact": candidate["programs"] == reference["programs"],
        "whole_elf_exact": candidate["sha256"] == reference["sha256"],
        "counted_matches": 0,
        "note": "non-code load bytes came from the user's pinned boot; original compiler and runtime are unqualified",
    }
    if not report["raw_load_and_header_exact"]:
        raise ValueError("trial report does not reflect the measured boot layout")
    REPORT.write_text(json.dumps(report, indent=2) + "\n",
                      encoding="utf-8", newline="\n")
    print(f"boot trial gate passed: {len(REPLACEMENTS)} exact objects, "
          f"{len(WITNESS_NAMES)} provisional C functions, "
          f"{program['file_size']} exact raw load bytes; zero counted matches")


if __name__ == "__main__":
    main()
