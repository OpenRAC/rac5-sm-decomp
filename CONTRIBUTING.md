# Contributing

This project is at the input-verification stage. Run the inspection tools and
their tests first. Record a measured hypothesis in an issue or change to the
appropriate tool or documentation; avoid adding guessed function matches.

When the compiler, program format and function catalogue are qualified, write
plain C in `src/`, with one definition per function. A function will be accepted
only by a complete byte-identical build of its target program. Put unsuccessful
but useful bodies in `nonmatching/` and explain their remaining differences.

Use short, focused commits and include commands and results in pull requests.
Do not include game-derived bytes, disc paths containing personal information,
or proprietary binaries.
