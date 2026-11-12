"""Tool identity checks shared by the boot and level gates.

The gates pin every tool by SHA-256 (config/boot/compiler_trial.json and
config/levels/compiler_trial.json). A GNU tool rebuilt from its published
sources (tools/compiler/build_gnu_ee.sh) has another hash on another build
host, because the hash depends on the host compiler. With ``--unpinned-tools``
a contributor can still run a gate with such tools: each compiler or per-source
assembler that differs from its pin is recorded instead of refused, the report
says the run does not qualify, and every compiled object must still equal its
pinned hash, so a rebuilt tool that behaves differently on any accepted source
still fails the gate. Matches are qualified only by a run with the pinned tools,
and tools/progress_status.py refuses a report that is not qualifying. The SN
assembler and linker of the link step are checked elsewhere
(r5900_assembly.check_tool) and always stay pinned.
"""

from __future__ import annotations

from pathlib import Path

ALLOWED = False
RECORDED: list[dict[str, str]] = []


def allow(enabled: bool) -> None:
    """Start a gate run: record (True) or refuse (False) tools that differ from their pin."""
    global ALLOWED
    ALLOWED = enabled
    RECORDED.clear()


def check(label: str, path: Path, actual: str, pinned: str, message: str) -> None:
    """Refuse a tool whose SHA-256 ``actual`` differs from its pin, or record it.

    The caller hashes the tool with its own digest function, so a gate keeps
    one place where tool files are read.
    """
    if actual == pinned:
        return
    if not ALLOWED:
        raise ValueError(message)
    if not any(item["tool"] == label and item["sha256"] == actual for item in RECORDED):
        RECORDED.append({"tool": label, "path": str(path), "sha256": actual,
                         "pinned_sha256": pinned})


def report_fields() -> dict[str, object]:
    """What a gate report says about the identity of the tools it ran."""
    return {"qualifying_tools": not RECORDED, "unpinned_tools": list(RECORDED)}


def summary() -> str:
    """One line for the console when the run used unpinned tools, else ''."""
    if not RECORDED:
        return ""
    names = ", ".join(item["tool"] for item in RECORDED)
    return (f"unpinned tools ({names}): every object matched, but this run does not "
            "qualify a match; the maintainer reruns the gate with the pinned tools")
