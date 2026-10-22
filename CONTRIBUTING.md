# Contributing

Thanks for helping. The rules live in [`AGENTS.md`](AGENTS.md) and
[`LEGAL.md`](LEGAL.md); this page is the short version and the workflow.

1. **Set up.** Python 3.12 or newer, your own lawful copy of the pinned USA
   disc and, for the assembly and gate work, your own local toolchain
   ([README](README.md#quick-start)). The pinned USA input and the SNR2 and
   boot metadata are verified: **644** narrowly accepted boot placements
   (87,228 bytes), one 476-byte frontend function and two shared level
   functions. The level compiler profiles, the complete function catalogue and
   the game-wide progress build remain open.
2. **Choose a scope.** Check the open issues and pull requests, and keep one
   comment in the [coordination issue](https://github.com/OpenRAC/rac5-sm-decomp/issues/99)
   that lists your own reservations; there is no automated matching queue. The
   walls met while matching are tracked in the
   [wall register](https://github.com/OpenRAC/rac5-sm-decomp/issues/98).
3. **Match.** Once the applicable compiler, program format and function
   boundary are qualified, write matching C or C++ in `src/`, with one
   definition per function. Put an unaccepted but useful body in
   `nonmatching/` and explain its remaining differences.
4. **Check.** Run `python -m unittest discover -s tests -v`,
   `python tools/check_repository.py` and `python tools/progress_status.py --check`.
   Regenerate metadata and progress with the relevant tool; never hand-edit
   generated tables or progress claims.
5. **Open a pull request.** Branch from `master` of your fork, keep the
   change focused, use short commits, and include your input version,
   evidence, commands, results and remaining limitations in the description.
   **The maintainer merges accepted PRs manually.**

For a game-derived finding, verify your own lawful USA disc against
`config/target.json` and identify the exact program, address, method and
uncertainty. Share a measured hypothesis in an issue or a focused change to
the tools or documentation. Do not add guessed function matches or claim
progress from symbol names.

## Rules

- **Sources.** Use the retail programs of your own disc, compatible open-source
  code under its licence, public decompilations and tools, and public hardware
  documentation. Never use Sony's SDK source, samples or headers, or leaked or
  NDA material, not even as a reference ([LEGAL.md](LEGAL.md)).
- **Never commit game data**: ISO images, retail programs, level modules,
  assembly listings, build output or the proprietary toolchains. They stay in
  ignored places.
- **Never post game data either**, not in an issue, a pull request, the
  Discord or anywhere else, including files a tool generated from your own copy
  of the disc. Describe what you see in words; retail bytes are not.
- **Plain C.** No inline or global assembly, no fixed registers, no raw
  instruction words and no patched compiler output to force a match. Hybrid
  experiments stay private, and their original instructions remain in the
  assembly baseline with no C credit. A declaration may use an assembler-name
  label for a retail ELF symbol (including C++ names); this names a symbol and
  does not emit instructions. The repository and boot compiler gates enforce
  this distinction, including a check of the preprocessed boot input.
- **A function is matched only when the complete retail program bytes
  reproduce at every applicable placement.** The boot-only scope and its
  remaining caveats are documented in
  [`docs/BOOT-MATCH-SCOPE.md`](docs/BOOT-MATCH-SCOPE.md).
- **One flag set per source file**, in
  [`config/cflags.txt`](config/cflags.txt); never per function.
- **Keep scratch work private.** `scratch/`, `_scratch*/`, personal disc
  paths, generated screening output and toolchain experiments stay out of Git.
  Keep useful variants under `nonmatching/` with their provenance, without
  turning them into matching credit.

## Review and promotion

For boot candidates, run the [promotion audit](docs/BOOT-PROMOTION.md) after the
complete private gate. It explains each owner's mechanical blockers and creates
a shortlist for semantic review; it never accepts a function automatically.

Use the seven rules in `AGENTS.md` throughout a small, coherent change:

- Identify the program, reference symbol and owned byte range before editing.
  Account for padding, aliases, callees and any bytes following a compiled body.
  Keep uncertain boundaries provisional; neither a terminal call nor a matching
  prefix proves a complete retail function.
- Promotion is a separate reviewed step. Show that the accepted source supplies
  the claimed range, not the retained assembly baseline. Recompile with the pinned
  profile and run the complete-program gate at every applicable placement after
  integration. Record the tested commit and real output. If inputs change, repeat
  the affected gates; a failed run must not preserve a previous passing claim.
- Justify every compiler/profile change using a classified mismatch and source
  provenance. Keep source and object controls from the previous qualified profile;
  check that wrong tools, flags or inputs are rejected. Recompile all affected
  accepted bodies before changing qualification. A patch to compiler source is
  different from inserting dead C operations or editing emitted instructions.
- Preserve the reference linker symbol when giving C a descriptive alias. Recover
  prototypes from both callers and callees; verify layout, access width and sign
  across users before introducing a shared struct. Use target-compatible size and
  offset assertions where practical. Meaningful names and semantic correctness
  are review obligations, not facts inferred from a passing linter.
- Compare one hypothesis at a time and keep the best source. After three unchanged
  mismatch classifications, revisit types/ABI/context, choose another approach,
  or park the attempt. Record the first difference, profile, attempted shapes and
  a reopening trigger in its existing near-miss entry. Keep raw logs privately;
  no committed campaign queue or experiment ledger is needed.
- Cleanup must preserve qualified output and original behavior. Recheck affected
  callers after type/header changes. Do not fix retail bugs, add artificial dead
  operations, or introduce PC behavior into a matching change. Platform ports and
  deliberate behavior fixes need separate scope and validation.
- Keep the public change focused: named source, useful explanations, maintained
  tools and their tests. `scratch/`, `_scratch*/`, private paths, generated screening
  output and toolchain experiments stay out of Git. Preserve useful variants under
  `nonmatching/` with provenance, without turning them into matching credit.

The repository, compiler and program gates cover machine-checkable invariants.
The PR review must cover the remaining boundary, naming, ABI and behavioral evidence;
CI without game inputs is not a full-image validation.

## Working with other people

A decompilation is a big job: thousands of functions, each of which has to come
out as exactly the same bytes as the original. Nobody finishes that alone, and
nobody is competing for a prize. When another project figures out a function, it
is not a point lost for us: it is one more piece of the game that all of us now
understand. So:

- **Disagree kindly.** Projects make different choices, and that is fine. Argue
  about the code, never about the person.
- **Credit what you reuse.** If you learned something from another project, a
  file or a function, say so in the source and in the commit, and name its
  licence ([THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)).
- **Share what you find.** A symbol name, a structure, a compiler quirk: it
  helps everyone, whichever release or approach they work on.
- **Welcome newcomers.** Every one of us started out not knowing how any of this
  works. Reviewing, documenting function behavior and improving the tooling all
  help, not just writing matches.
- **Be patient with people's work.** A pull request is someone's evening.
  Review it when you can, say why it does not match, and expect the same back.

## AI-assisted contributions

Tools that write code with a model's help are welcome here; this project is
written for agents as much as for people, and `AGENTS.md` holds their rules.
Two things follow from that:

- **You are responsible for what you contribute.** A pull request written with
  an AI is yours, the same as one written by hand: it has to match retail, it
  has to follow the rules above, and you have to be able to explain it.
- **The rules do not relax for generated code.** It is still your contribution,
  and the sourcing rules apply to it exactly as they apply to anything else.

## Questions, or a problem

The [OpenRAC Discord](https://discord.gg/Sfd2B54PDG) is open to everyone, and
`info@openrac.dev` reaches the maintainers privately. If you have a question,
run into gate issues, or want to collaborate, either works. Please do not open
a public issue to report a problem with someone; write instead.
