# Bounded level-C search with OpenRAC

[`tools/rac5_permuter_backend.py`](../../tools/rac5_permuter_backend.py) is an
isolated compiler/checker backend for the `rac5/ntsc` profile in the
[OpenRAC shared wrapper](https://github.com/OpenRAC/OpenRAC/tree/develop/tools/permuter).
The shared profile and candidate bounds belong in OpenRAC; this repository owns
the game-specific compiler, source policy, input pins and placement checks.

## Scope and limits

The backend supports USA SNR2 level C sources that the upstream C parser accepts,
with one function per object and a qualified Linux compiler/assembler route.
It uses the canonical source route and every recorded placement for that source.
The boot, C++, driver-routed sources and whole-program promotion are outside
this adapter. An unfinished body needs explicit reviewed bounds; a next label
does not establish its size.

The initial profile enables only upstream `perm_reverse_cond`. The improved
wrapper proposed in [OpenRAC #1002](https://github.com/OpenRAC/OpenRAC/pull/1002)
uses a finite list of applicable C transformations instead. A transformation
is a hypothesis, not a guarantee of semantic preservation: floating-point
conditions, NaNs, signed arithmetic, aliases and side effects still need review.
Use `--no-asm-passes`; generic empty-assembly constraints are not source evidence.
This does not change the existing exceptions for exactly reviewed public
runtime primitives.

### Check applicability before searching

The pinned upstream `perm_reverse_cond` transforms an `if` with an `else`, or a
ternary expression. It cannot transform a plain `if` without an `else`, a loop
condition, or a function with no such expression. Check the actual prepared AST
before launching the search. In a measured 20-source use on 27 November 2026,
only seven prepared functions had an admissible site.

The initial upstream randomizer retries `RandomizationFailure` internally until a pass
succeeds. With only this pass enabled and no site, that loop can prevent the
worker from producing another candidate or observing its cooperative stop.
The candidate ceiling does not bound these internal AST retries. Treat a source
with no admissible site as inapplicable; preserve its baseline measurement and
stop its isolated search rather than reporting nonexistent variants. A base
that is already exact needs no further permutation. See the
[pinned pass](https://github.com/simonlindholm/decomp-permuter/blob/8556c81d80d1c1af98a858c8f4dc951357f29139/src/randomizer.py#L1317)
and [retry loop](https://github.com/simonlindholm/decomp-permuter/blob/8556c81d80d1c1af98a858c8f4dc951357f29139/src/randomizer.py#L2691).

The improved wrapper enumerates eligible branch reversals, adjacent uninitialized
declaration swaps, early-return guards and guarded `do` loops. It rejects unsafe
scope moves, address-taken declaration swaps and unsupported control transfers.
Every variant starts from the same base. `result.json` records applicability and
the reason a search stopped; no remaining site is an ordinary completion. An exact
base stops before a variant is requested. Deadlines and manual stops also interrupt
upstream retries and clean up only the search's own worker/compiler processes.
The original three-source ceiling still applies across a baseline, a contextual
correction and any permutation; restarting a command does not reset that rule.

The wrapper's `matched` status means that isolated placements passed the
checker. It does not promote source, change progress, run full-program gates or
prove arbitrary behavior. Receipts keep `accepted=false`. Continue through the
normal type, boundary, ABI and complete-program reviews.

## Setup

Use the shared OpenRAC wrapper with the RAC5 profile and total-candidate ceiling.
The integration was qualified against OpenRAC
`b989ec9aa05cc8dba2a262219ca500c45ae0b9d4` and external decomp-permuter
`8556c81d80d1c1af98a858c8f4dc951357f29139`. No permutation engine is vendored here.
The improved search is implemented in OpenRAC commit
`94460886a10b0a57d81523789437a27618dfb960`, proposed in the pull request above;
do not assume an older installed wrapper has these stop and applicability fixes.

Copy [the runtime example](../../config/permuter-runtime.example.json) to a
private directory and fill in the locally installed qualified tools and your
own level files. The backend verifies tool hashes against canonical compiler
configuration and complete modules against `config/levels/modules.tsv`.
Contradictory runtime pins are refused. On WSL, place the compiler scratch
directory on native Linux storage: the old 32-bit tools can fail with
`EOVERFLOW` on DrvFS.

Set these variables for the shared wrapper:

| Variable | Local value |
| --- | --- |
| `OPENRAC_SOURCE_RAC5_NTSC` | This RAC5 checkout |
| `DECOMP_PERMUTER` | The pinned upstream engine checkout |
| `OPENRAC_PERMUTER_CACHE` | A private native-Linux cache |
| `RAC5_BACKEND` | Absolute path to `tools/rac5_permuter_backend.py` |
| `RAC5_MATCH_RUNTIME` | The private runtime JSON |
| `RAC5_SOURCE_GLOB` | A precise source path/glob relative to RAC5 |
| `RAC5_RETAIL_DIR` | The private retail cache, expressed relative to RAC5 |

An unfinished source's `runtime.targets` entry must identify its source, profile,
assembler and placements with module, offset and size. It must agree with the
canonical module pins. Check reservations and the recorded blocker before
selecting or retrying work.

Prepare only the selected function's private disassembly cache:

```sh
python3 "$RAC5_BACKEND" --repo "$OPENRAC_SOURCE_RAC5_NTSC" \
  --runtime "$RAC5_MATCH_RUNTIME" prepare --function FUNCTION \
  --source-key /path/to/the/source.c
```

Then run from the shared OpenRAC checkout:

```sh
# Standalone baseline diagnosis, when no search is needed:
python3 tools/permuter base rac5/ntsc FUNCTION --no-asm-passes --keep-work

# A search already includes its own baseline:
python3 tools/permuter run rac5/ntsc FUNCTION -j1 --max-candidates 3 \
  --seconds 60 --no-asm-passes --keep-work --out /path/to/private/result
```

Choose contextual corrections before compiling. For an unchanged source, use one
bounded search rather than a baseline-only command followed by the same constructor
again. If Ghidra evidence justifies a changed seed, measure the original once and
allow at most that seed plus one further variant. Keep the actual source hashes and
distinguish compiler invocations from distinct C hypotheses: a repeated baseline is
verification work, not another source candidate or a renewed allowance.

The ceiling includes the constructor's baseline. A fourth candidate or multiple
workers are refused before compilation. Keep each search tied to an explicit
hypothesis; do not restart the same search to evade the three-attempt rule.

## Checks and evidence

Only scratch copies are compiled. The backend calls the public pinned compiler
and level linker APIs; it neither changes the source tree nor rewrites compiler
output. Imports are compared by name, including calls whose linked address is
zero. Cached verdicts bind source/object hashes, placements, module pins,
profile, assembler and canonical flags. The checker verifies current tool pins
and backend identity, and reruns preprocessing to detect changed inputs without
rerunning the compiler or linker. An aligned search score and a raw
word-distance count are different diagnostics; neither replaces the checker.

Run ordinary tests without proprietary tools or game data:

```sh
python -m unittest discover -s tests -p test_rac5_permuter_backend.py -v
```

For optional real compiler/linker checks, set `OPENRAC_SOURCE_RAC5_NTSC` and
`RAC5_MATCH_RUNTIME`, then run the same command with Linux Python. The tests use
already accepted public C and private lawful inputs. They exercise a positive
build, a wrong import with equal linked bytes, changed source/object identity
and an altered module rejected before compilation or retail preparation.
`RAC5_CACHE_TEST_MEASUREMENT` can additionally select a current positive receipt
for cache-only route/flags checks. Regenerate legacy receipts missing current
metadata rather than assuming their fields.

Keep all runtime configuration, disassembly, game data, objects, generated
candidates and result archives private. Preserve useful publishable attempts
under `nonmatching/` through the [contribution workflow](../../CONTRIBUTING.md).
The [regression guard](../../tools/candidate_regression_guard.py) can preserve
properties from trusted evaluations; its decisions grant no matching credit.
