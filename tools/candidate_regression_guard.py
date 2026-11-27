"""Keep measured properties while refining a C candidate; never award matching credit.

Inputs are evaluations produced by trusted checks, not assertions from a model.
The contract digest identifies the reference, test domain and check definitions.
Passing finite tests does not establish exhaustive equivalence or valid C types.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
from pathlib import Path

REQUIRED_CHECKS = ("source_policy", "toolchain_pins", "entry_identity", "named_imports")
STATES = {"pass", "fail", "unknown"}


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def validate_evaluation(value: dict) -> None:
    if not isinstance(value, dict) or not isinstance(value.get("target_id"), str) or not value["target_id"]:
        raise ValueError("An evaluation requires a target_id")
    for field in ("reference_sha256", "contract_sha256", "source_sha256"):
        if not isinstance(value.get(field), str) or not re.fullmatch(r"[0-9a-f]{64}", value[field]):
            raise ValueError(f"Invalid {field}")
    checks = value.get("checks")
    if not isinstance(checks, dict) or not checks:
        raise ValueError("An evaluation requires named checks")
    for name, result in checks.items():
        if not isinstance(name, str) or not name or not isinstance(result, str) or result not in STATES:
            raise ValueError("Check results must be pass, fail or unknown")
    if any(name not in checks for name in REQUIRED_CHECKS):
        raise ValueError("Required compiler and source checks are missing")
    distance = value.get("byte_diff_words")
    if distance is not None and (type(distance) is not int or distance < 0):
        raise ValueError("byte_diff_words must be a nonnegative integer or null")


def compare_evaluations(baseline: dict, candidate: dict) -> dict:
    """Return a refinement decision, keeping unknown evidence distinct from failure."""
    validate_evaluation(baseline)
    validate_evaluation(candidate)
    result = {"decision": "hold", "regressions": [], "improvements": [],
              "automatic_matching_credit": 0,
              "qualification": "Finite checks under the stated contract; independent review and program gates remain required"}
    for field in ("target_id", "reference_sha256", "contract_sha256"):
        if baseline[field] != candidate[field]:
            return {**result, "reason": f"Different {field}; re-establish a comparable baseline"}
    if baseline["checks"].keys() != candidate["checks"].keys():
        return {**result, "reason": "Different check sets; use an explicit new contract"}
    if any(baseline["checks"][name] != "pass" for name in REQUIRED_CHECKS):
        return {**result, "reason": "The baseline has not passed the required source and compiler checks"}
    protected = [name for name, state in baseline["checks"].items() if state == "pass"]
    result["regressions"] = [name for name in protected if candidate["checks"][name] != "pass"]
    result["improvements"] = [name for name, state in candidate["checks"].items()
                              if state == "pass" and baseline["checks"][name] != "pass"]
    result["pending"] = [name for name, state in candidate["checks"].items() if state != "pass"]
    if result["regressions"]:
        return {**result, "decision": "retain_baseline", "reason": "A previously passing property regressed or became unknown"}
    if result["improvements"]:
        return {**result, "decision": "use_candidate_for_next_trial", "reason": "New passing evidence without a measured regression"}
    before, after = baseline.get("byte_diff_words"), candidate.get("byte_diff_words")
    if before is not None and after is not None and after < before:
        return {**result, "decision": "use_candidate_for_next_trial", "reason": "Smaller byte difference without a measured regression"}
    return {**result, "decision": "retain_baseline", "reason": "No measured improvement"}


def restore_baseline(decision: dict, baseline: dict, candidate: dict,
                     baseline_source: Path, working_source: Path, archive_dir: Path) -> dict:
    """Under a single writer, restore the measured draft and retain rejected bytes.

    Hash checks refuse edits already present when the files are read. They are
    not a cross-process lock; the caller owns serialization and recipe state.
    """
    if decision.get("decision") != "retain_baseline":
        raise ValueError("A restore requires a retain_baseline decision")
    validate_evaluation(baseline)
    validate_evaluation(candidate)
    if compare_evaluations(baseline, candidate) != decision:
        raise ValueError("The decision does not match these evaluations")
    baseline_bytes = baseline_source.read_bytes()
    working_bytes = working_source.read_bytes()
    if digest(baseline_bytes) != baseline["source_sha256"]:
        raise ValueError("Baseline source no longer matches its measurement")
    if digest(working_bytes) != candidate["source_sha256"]:
        raise ValueError("Working source changed after measurement; do not overwrite it")
    archive_dir.mkdir(parents=True, exist_ok=True)
    retained = archive_dir / (candidate["source_sha256"] + ".c")
    if retained.exists():
        if retained.read_bytes() != working_bytes:
            raise ValueError("Conflicting rejected-source archive")
    else:
        with retained.open("xb") as stream:
            stream.write(working_bytes)
            stream.flush()
            os.fsync(stream.fileno())
    temporary = working_source.with_name(working_source.name + ".restoring")
    with temporary.open("xb") as stream:
        stream.write(baseline_bytes)
        stream.flush()
        os.fsync(stream.fileno())
    temporary.replace(working_source)
    return {"restored_source_sha256": digest(working_source.read_bytes()),
            "rejected_source": str(retained), "automatic_matching_credit": 0}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("baseline", type=Path)
    parser.add_argument("candidate", type=Path)
    parser.add_argument("--restore", action="store_true")
    parser.add_argument("--baseline-source", type=Path)
    parser.add_argument("--working-source", type=Path)
    parser.add_argument("--archive-dir", type=Path)
    args = parser.parse_args()
    try:
        baseline = json.loads(args.baseline.read_text(encoding="utf-8"))
        candidate = json.loads(args.candidate.read_text(encoding="utf-8"))
        result = compare_evaluations(baseline, candidate)
        if args.restore:
            if not all((args.baseline_source, args.working_source, args.archive_dir)):
                parser.error("--restore requires --baseline-source, --working-source and --archive-dir")
            if result["decision"] == "retain_baseline":
                result["restore"] = restore_baseline(result, baseline, candidate, args.baseline_source,
                                                       args.working_source, args.archive_dir)
    except (ValueError, OSError) as error:
        parser.error(str(error))
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
