# Docs

Every doc of this repository, by folder. New here? Read [building.md](build/building.md), then
[CONTRIBUTING.md](../CONTRIBUTING.md) and the [roadmap](contributing/roadmap.md).

## build/: the programs and their assembly rebuilds

| Doc | What it covers |
|---|---|
| [building.md](build/building.md) | The programs, setup, the checks and the gates |
| [assembly-status.md](build/assembly-status.md) | Assembly reconstruction status |
| [frontend-assembly.md](build/frontend-assembly.md) | The FRONTEND.REL assembly interval |
| [level-01-assembly.md](build/level-01-assembly.md) | The LEVEL_01.REL assembly interval |
| [snr2-assembly-intervals.md](build/snr2-assembly-intervals.md) | Candidate assembly intervals across all SNR2 modules |
| [rel-format.md](build/rel-format.md) | Measured SNR2 module metadata |
| [relocated-image.md](build/relocated-image.md) | The local SNR2 relocated-image baseline |
| [dvp-overlays.md](build/dvp-overlays.md) | Boot VU overlays and exact ELF packaging |
| [boot-symbols.md](build/boot-symbols.md) | The boot's `.sndata` symbols |

## gates/: what counts as a match

| Doc | What it covers |
|---|---|
| [boot-trial-gate.md](gates/boot-trial-gate.md) | The reproducible boot C trial gate |
| [boot-match-scope.md](gates/boot-match-scope.md) | Accepted boot C placements |
| [boot-promotion.md](gates/boot-promotion.md) | The boot C promotion protocol |
| [boot-c-witness.md](gates/boot-c-witness.md) | The provisional whole-boot C replacement witness |
| [level-program-gate.md](gates/level-program-gate.md) | The first complete SNR2 program gates |
| [level-c-witness.md](gates/level-c-witness.md) | Shared level and front end C witnesses |

## compiler/: the compiler

| Doc | What it covers |
|---|---|
| [compiler-status.md](compiler/compiler-status.md) | Compiler evidence and a limited boot-only profile |
| [compiler-witnesses.md](compiler/compiler-witnesses.md) | Provisional C compiler witnesses for the boot |
| [compiler-loop-trial.md](compiler/compiler-loop-trial.md) | The short-loop compiler trial |

## contributing/: plan and blockers

| Doc | What it covers |
|---|---|
| [roadmap.md](contributing/roadmap.md) | The measured starting point and the order of work |
| [matching-blockers.md](contributing/matching-blockers.md) | Walls met while matching, editable by everyone |

## research/

| Doc | What it covers |
|---|---|
| [level-function-inventory.md](research/level-function-inventory.md) | SNR2 function boundaries and the shared-code audit |
| [multiworld-crosscheck.md](research/multiworld-crosscheck.md) | Cross-check against the public address map |

## Tools

| Tool | Purpose |
|---|---|
| `tools/disc.py` | Inspect, verify and extract the pinned USA disc |
| `tools/elf.py` | Report the PS2 ELF metadata without publishing executable bytes |
| `tools/rel.py` | The SNR2 level modules: inspect them and regenerate the metadata catalogues |
| `tools/boot_symbols.py` | The boot's embedded SNR2 symbol table and code-label bounds |
| `tools/relocate.py` | Reconstruct a module at a measured load base (private baseline) |
| `tools/boot_assembly.py` | Rebuild the boot `.text` and the file-backed load image |
| `tools/snr2_assembly.py` | Rebuild the candidate code interval of every level placement |
| `tools/boot_trial_gate.py` | The pinned complete-boot C gate |
| `tools/level_program_gate.py` | The complete SNR2 program gate for the frontend and level 01 |
| `tools/level_c_gate.py` | The shared-level, frontend and level-body C gate |
| `tools/progress_status.py` | The scoped progress snapshot and its summary table |
| `tools/bytematch_estimate.py` | The labelled ByteMatch estimate |
| `tools/check_repository.py` | The pre-commit check: no game data, build output or toolchain in Git (CI runs it) |

## The progress snapshot

This is a **scoped** snapshot, not a game-wide percentage: the boot scope is
measured, the frontend and level scopes are candidate code intervals, and the
level denominator is an optimistic deduplication scenario.
[`progress/README.md`](../progress/README.md) explains every count, and
[`docs/contributing/roadmap.md`](contributing/roadmap.md) lists what is still open: the original
compiler identity, most function boundaries, the level compiler profiles and
full runtime behavior.
The Functions badges show `0/0` until a reviewed game-wide function count is
available; this does not mean that no C bodies have been matched.
