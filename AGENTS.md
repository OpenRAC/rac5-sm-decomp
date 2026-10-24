# Instructions for contributors and AI agents

Read `README.md`, `LEGAL.md` and `docs/ROADMAP.md` before changing this project.
This repository adopts RAC2's **evidence standard and source layout**, not its
compiler settings or level-format assumptions.

- Use only a legally obtained disc, public documentation, licensed code, and
  your own reverse engineering. Never use leaked or NDA source, Sony SDK
  source, samples or headers.
- A compiler from an SDK may be used as a private build tool; that does not
  authorize publishing source from the SDK. For reused public code, identify
  the public upstream version and file, preserve its copyright, license and
  exception notices, and describe local adaptations. A path into a local SDK
  source tree is not public provenance. Verify any SDK-bundled GNU routine
  against a public GNU release before importing it.
- Never commit disc images, retail executables, extracted levels, disassembly,
  assets, proprietary tools, build output or secrets. This includes instruction
  listings inside C comments. Keep them under the ignored local directories.
- Keep one authored definition per function in `src/`, using C or C++ only
  after the corresponding compiler profile is measured. Put a useful but
  nonmatching attempt in `nonmatching/`; do not count it as a match.
- C/C++ evidence must come from compiler-generated instructions: no inline or
  global assembly, fixed-register bindings, raw instruction words, artificial
  assembly barriers, or edits to compiler output. This also applies to provisional
  witnesses and public `nonmatching/` attempts. Preserve hybrid experiments privately;
  leave their retail intervals in the assembly baseline without C credit. Real
  handwritten assembly requires separate evidence and maintainer classification,
  never automatic C acceptance. File-scope assembler-name labels on declarations
  are permitted solely to name retail ELF symbols; they must emit no instructions.
- Do not infer this game's compiler, flags, function boundaries or level layout
  from RAC2. Record the evidence for each before changing the build.
- A match requires the qualified toolchain to reproduce the complete retail
  program bytes at every applicable placement. A source file compiling, a
  similar disassembly, or a masked comparison is not sufficient.
- Regenerate catalogues and progress with their tools. `tools/rel.py` and
  `tools/boot_symbols.py` generate symbol metadata, not function or progress
  claims. Never hand-edit generated claims.
- Run the relevant tests and `python tools/check_repository.py` before a
  commit. Describe what was verified and what remains provisional.
- Work on a branch for contributions. Keep game data and private paths out of
  commits and pull requests. The owner merges manually.

## Seven working rules

1. **Bounds and ownership.** Each replacement range has one owner, no overlaps
   or duplicate names. A compiled prefix or next-label interval is not proof of
   a complete function. Unknown extents remain provisional and uncounted.
2. **Explicit promotion.** Count C only when the claimed body is actually linked
   at every reviewed placement and the complete-program gates pass. Assembly
   fallback preserves the baseline but earns no C credit. One proven zero word
   of linker alignment may follow a complete body, but count only compiled
   body bytes after boundary and semantic review; promote separately.
3. **Evidence-based profiles.** Compiler routes, options and patches require a
   measured cause, known provenance and regression controls. Do not select a
   compiler just because one sample matches. Requalify affected accepted bodies.
4. **Proven names and types.** Keep reference ELF symbols stable. Descriptive
   aliases, prototypes, field sizes, offsets and signedness need evidence from
   symbols, code, callers or data. Share definitions rather than inventing layouts.
5. **Bounded experiments.** Change one hypothesis at a time. After three attempts
   with the same mismatch class, recover context, change approach or park the
   best source with its first difference and a concrete reopening condition.
6. **Original behavior.** Preserve original behavior, including bugs, in matching
   work. Do not add purposeless C tricks to steer code generation. Bug fixes and
   PC platform adaptations belong in explicitly separate work and earn no PS2
   matching credit. This does not relax the strict no-instruction-assembly rule.
7. **Public hygiene.** Keep scratch directories, probes, generated lists and raw
   reports private. Index useful alternatives by function in `nonmatching/`.
   Reusable tools belong in `tools/` with tests; public text is English.

## Shared blocker knowledge

[`docs/MATCHING-BLOCKERS.md`](docs/MATCHING-BLOCKERS.md) is the shared reference for
blockers, measured attempts and verified remedies. **Every contributor may edit any
entry through a normal fork/topic branch and pull request**, including entries
originally written by someone else. Maintainers review merges; they do not own all
knowledge edits. A coding AI uses ordinary Markdown file edits and Git in this same
repository; no wiki clone, browser automation or Computer Use is needed.

Before retrying a near miss, investigating a blocked family or changing the toolchain,
read the relevant entry and retained source, and check cited fixes against current
`origin/master`. Do not repeat recorded attempts without a new hypothesis or changed input.

When you find a blocker, useful evidence or a solution, update the existing entry in
`docs/MATCHING-BLOCKERS.md` in your branch and include it in the relevant PR. Keep it
concise:

- Identify the target/family, release, compiler/assembler profile and placement coverage.
- Record the hypothesis, measured result, remaining difference and next useful experiment.
  Keep negative results that establish a new constraint; do not duplicate unchanged trials.
- Distinguish hypotheses, retained near misses, local matches, pending PRs and merged fixes.
  Link the PR/commit and real checks; equal size alone is not a match. Reconcile an entry
  when its fix lands, preserving superseded measurements as clearly dated history.
- Keep useful C in `nonmatching/`; game data, trial objects, assembly and logs stay private.

Discuss findings in the relevant code or documentation PR and incorporate the result in the
shared file. [Issue #98](https://github.com/OpenRAC/rac5-sm-decomp/issues/98) is retired and
retained only as historical provenance, not an active discussion hub or knowledge store.
A personal persistent comment is not required for blocker knowledge. Preserve existing
comments as historical sources; do not edit another person's comment. Do not create a
parallel register, wiki knowledge copy or per-contributor/per-session file. The wiki is only
a link to the same repository document. Reservations remain exclusively in #99; neither the
document nor #98 reserves work.

## Coordinating work between contributors

All contributors actively matching bodies must coordinate through the shared
GitHub issue:

https://github.com/OpenRAC/rac5-sm-decomp/issues/99

The purpose of this issue is to prevent contributors and their AI agents from
duplicating work.

This is a lightweight coordination noticeboard only. It is **not** a task
queue, campaign register, reservation database, match proof or source of truth
for completed work. The repository and `master` remain authoritative.

### Every active contributor must have one comment

Each contributor working on the project must have exactly **one persistent
coordination comment** in issue #99.

If you are beginning work and do not already have your own comment in that
issue, you are **required to create one before starting matching work**.

Each contributor edits only their own comment. Do not modify another
contributor's comment.

Do not create a new comment every time work changes. Update your existing
comment in place.

AI agents acting on behalf of a contributor must verify that their
contributor has a coordination comment before beginning or assigning matching
work. If no comment exists, create one before continuing.

### Describe only your own reservations

List only your own current reservations in your comment. Do not copy other
contributors' claims, add lists of scopes you promise not to touch, or state
that another contributor still reserves a scope. Those copies become stale
when its owner finishes or releases the work.

Before choosing work, check the other contributors' current comments for
overlap. Each contributor's own comment is the reference for that
contributor's active reservations; another person's comment does not reserve
work on their behalf. Update your own comment when you finish, release or
replace your scope.

### Scope selection and reservation limit

Reserve a manageable amount of work that you intend to attempt next. Prefer
small, clearly defined scopes rather than entire modules.

Each contributor may reserve a maximum of **500 unfinished bodies at one
time**, counted across all their active scopes, branches, worktrees and AI
agents combined. This is a per-contributor limit, not a per-agent or
per-comment limit.

Count each distinct retail body once, whatever the number of placements it
has: the 416-byte `Quat_Slerp` body is one body at twenty placements. Bodies
already accepted on current `origin/master` do not count toward the limit.

A scope may be a level module, an authored body file, a compiler profile, or
an explicit list of bodies, provided its total does not exceed the
contributor's remaining allowance. If a module holds too many unfinished
bodies, reserve a smaller sub-scope or list the specific bodies being
reserved.

Do not reserve additional bodies indirectly through broad module claims,
multiple comments, alternate branches or additional AI agents.

### Bringing existing reservations within the limit

Contributors currently reserving more than 500 unfinished bodies must update
their existing coordination comment to retain no more than 500 and explicitly
release the remainder. This requirement applies to existing reservations as
well as new ones.

Until an oversized reservation is narrowed, other contributors must request
coordination rather than assume which bodies have been released. The
contributor holding the oversized reservation must identify the retained scope
clearly; a maintainer should resolve any dispute or lack of response.

### Updating a reservation

Contributors may request additional bodies at any time, provided the
resulting active reservation never exceeds 500 unfinished bodies.

Before adding or replacing reserved bodies:

1. Fetch `origin/master` and check which bodies remain unfinished.
2. Read the current comments in issue #99 and check for overlapping
   reservations.
3. Release enough existing bodies if necessary to remain within the limit.
4. Update your one persistent coordination comment with the retained,
   released and newly reserved scopes.
5. Re-check for overlap before starting work.

A body remains reserved until its implementation reaches `origin/master` or
the contributor explicitly releases it. Local matches, local commits and open
pull requests still count toward the limit while the body remains unfinished
upstream.

### Active scopes are exclusive

Do not work inside another contributor's active scope without their explicit
agreement. Module and file claims include their unfinished bodies, subject to
the 500-body limit.

An individual-body reservation does not reserve the surrounding source file.
Coordinate edits when contributors work on different bodies in the same file.

AI agents must verify their contributor's current scope and combined
reservation count before beginning or assigning matching work. Agents must
not expand a reservation beyond 500 bodies or modify another contributor's
comment.

Contributors with oversized reservations must narrow them before starting or
assigning further matching attempts. They may finish attempts already in
progress, but must not start new ones until their reservation complies with
the limit.

These rules apply to all matching work, including AI-assisted work and
matches carried from another OpenRAC decompilation.

See [CONTRIBUTING.md](CONTRIBUTING.md#review-and-promotion) for the review steps.
Checks enforce structural invariants, not semantic truth: names/types, patch
justification, intent and original behavior still require evidence and review.
