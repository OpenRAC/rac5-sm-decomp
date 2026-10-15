# Instructions for contributors and AI agents

Read `README.md`, `LEGAL.md` and `docs/ROADMAP.md` before changing this project.
This repository adopts RAC2's **evidence standard and source layout**, not its
compiler settings or level-format assumptions.

- Use only a legally obtained disc, public documentation, licensed code, and
  your own reverse engineering. Never use leaked or NDA source, Sony SDK
  source, samples or headers.
- Never commit disc images, retail executables, extracted levels, disassembly,
  assets, proprietary tools, build output or secrets. Keep them under the
  ignored local directories.
- Keep one authored definition per function in `src/`, using C or C++ only
  after the corresponding compiler profile is measured. Put a useful but
  nonmatching attempt in `nonmatching/`; do not count it as a match.
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
