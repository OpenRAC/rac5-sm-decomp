# Contributing

Start with the complete [README contribution walkthrough](README.md#start-contributing)
and [LEGAL.md](LEGAL.md). The pinned USA input and SNR2/boot metadata are
verified, with one narrowly accepted boot function. The level compiler
profiles, complete function catalogue and game-wide progress build remain
open. Run the synthetic tests first. For a game-derived
finding, verify your own lawful USA disc against `config/target.json` and
identify the exact program, address, method and uncertainty. Share a measured
hypothesis in an issue or a focused change to the tools or documentation.
Check open issues and PRs before choosing a scope; no reservation queue exists
yet. Do not add guessed function matches or claim progress from symbol names.

Once the applicable compiler, program format and function boundary are
qualified, write matching C or C++ in `src/`, with one definition per function.
A function is accepted only after a byte-identical complete-program gate for
every applicable placement. The boot-only scope and its remaining caveats are
documented in `docs/BOOT-MATCH-SCOPE.md`. Put unaccepted but useful bodies in
`nonmatching/` and explain their remaining differences.

The same source rule applies to accepted C and provisional witnesses: no inline or
global assembly, fixed registers, raw instruction words or patched compiler output
to force a match. Hybrid experiments stay private, and their original instructions
remain in the assembly baseline with no C credit. A declaration may use an
assembler-name label for a retail ELF symbol (including C++ names); this names a
symbol and does not emit instructions. The repository and boot compiler gates
enforce this distinction, including a check of preprocessed boot input.

Use short, focused commits. Before a PR, run
`python -m unittest discover -s tests -v` and
`python tools/check_repository.py`, then review the staged diff. Include your
input version, evidence, commands, results and remaining limitations in the
PR description. Never include game-derived bytes, disassembly listings,
memory dumps, personal disc paths, secrets or proprietary binaries. The
maintainer merges accepted PRs manually.
