# Contributing

Start with the complete [README contribution walkthrough](README.md#start-contributing)
and [LEGAL.md](LEGAL.md). The pinned USA input and SNR2/boot metadata are
verified, but the loader semantics, compiler profile, function catalogue and
matching build are not. Run the synthetic tests first. For a game-derived
finding, verify your own lawful USA disc against `config/target.json` and
identify the exact program, address, method and uncertainty. Share a measured
hypothesis in an issue or a focused change to the tools or documentation.
Check open issues and PRs before choosing a scope; no reservation queue exists
yet. Do not add guessed function matches or claim progress from symbol names.

When the compiler, program format and function catalogue are qualified, write
matching C or C++ in `src/`, with one definition per function. A function will be accepted
only by a complete byte-identical build of its target program. Put unsuccessful
but useful bodies in `nonmatching/` and explain their remaining differences.

Use short, focused commits. Before a PR, run
`python -m unittest discover -s tests -v` and
`python tools/check_repository.py`, then review the staged diff. Include your
input version, evidence, commands, results and remaining limitations in the
PR description. Never include game-derived bytes, disassembly listings,
memory dumps, personal disc paths, secrets or proprietary binaries. The
maintainer merges accepted PRs manually.
