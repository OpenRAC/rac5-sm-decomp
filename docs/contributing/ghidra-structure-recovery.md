# Ghidra structure recovery

`tools/ghidra_structure_recovery/run.py` compares small, locally supplied function
fragments using Ghidra's StructureRecovery algorithms. It transfers field names
and types from a **supplied source structure with explicit provenance** into
proposed target layouts. It does not infer authoritative source types or prove
that two functions share an identity.

The tool creates a new private Ghidra project and a private runtime copy. Existing
projects, installations and bridges are not used for writes. The output directory
must not already exist and must be outside this source checkout and the runtime
installations. No generated Java, binary fragments, projects, logs, manifests
containing game information, or reports belong in Git.

## Requirements and source pin

- Python 3.12 or later; standard library only.
- Ghidra 12.2 revision `8ca9077040cc43cd790babcfccf19475622a3e9a`, with
  `BSim-src.zip` SHA-256
  `bf45ed48df00162a86e76966308bf3eaede6399859a85b400fe1a4be0b664f04`.
  The original `StructureRecoveryPlugin.java`, which registers the GUI defaults,
  is separately checked at SHA-256 after CRLF-to-LF conversion
  `c8206816d086e63948184b4cd5ba0ddca0edf145fa773ac120769b0e861589a8`.
- An explicit JDK 25 directory. No global Java or PATH changes are made.
- The requested processor language installed in that Ghidra installation. For
  R5900 input, install a compatible public EE extension separately. This tool
  does not download extensions or assume that plain MIPS64 implements the EE.
  User-profile extensions are not copied into the private runtime.

The three official task sources are read from the installed archive and checked
against individual SHA-256 pins after CRLF-to-LF conversion. Preparation replaces
only their package, GUI context type, and nested-enum import. Algorithms and
threshold decisions remain unchanged. The generated sources retain their
Apache-2.0 headers; the runtime copy retains the installation's licenses.
`adapter.diff`, `adapter-audit.json` and `pins.json` record this preparation.
Unknown versions or source changes fail closed. Updating these pins requires
review of the upstream changes and renewed positive/negative controls.
Inherited JVM-option environment variables are cleared for the child process;
settings, caches, home and temporary directories are scoped to the new output.
The supplied JDK is selected in the private runtime's launch configuration.

The authored context uses the reviewed defaults: `medium_nosize`, source and
target self-significance above 15, similarity 0.3 through 1.0, confidence lower
bound 0, bookmark confidence 20, maximum offset 100000 (decimal), and
`SOLO_OR_MIN_CONFIDENCE`. These are the GUI plugin's registered defaults, rather
than the different initial values inside `MatchFunctionsTask`. The active
parameters are exported with each comparison. A small function can be
filtered out before a match is considered. A missing match is not evidence of
semantic inequality.

## External manifest

Supply one JSON manifest outside the checkout. Each comparison has one source
fragment and one target fragment, a single known source structure, and explicit
function prototypes. Inputs are read-only, hash checked, and copied into the new
private output before Ghidra starts. A fragment is the caller-supplied contiguous
extent of one function; this tool does not prove its boundaries or resolve its
external relocations.

The following is a **synthetic schema example**, not a game layout or executable
fixture. Replace paths and SHA-256 values with your own legally obtained inputs:

```json
{
  "schema_version": 1,
  "language": "r5900:LE:32:default",
  "compiler_spec": "default",
  "pointer_size": 4,
  "cases": [{
    "id": "synthetic_layout_change",
    "source": {
      "path": "source-function.bin",
      "sha256": "0000000000000000000000000000000000000000000000000000000000000000",
      "address": "0x1000",
      "arguments": ["pointer"],
      "return_type": "int32",
      "provenance": "Replace with the source fragment's origin and boundary evidence"
    },
    "target": {
      "path": "target-function.bin",
      "sha256": "0000000000000000000000000000000000000000000000000000000000000000",
      "address": "0x2000",
      "arguments": ["pointer"],
      "return_type": "int32",
      "provenance": "Replace with the target fragment's independent origin"
    },
    "types": [{
      "name": "SyntheticRecord",
      "size": 16,
      "provenance": "Independently authored synthetic source declaration",
      "fields": [
        {"name": "value", "offset": 4, "type": "int32"},
        {"name": "flags", "offset": 12, "type": "uint32"}
      ]
    }],
    "source_structure": "SyntheticRecord",
    "preview_apply": false
  }]
}
```

Paths resolve relative to the manifest. Addresses are offsets in each fragment's
own program, not a shared runtime address space. SHA-256 values use lowercase hex.
Each fragment is limited to 64 KiB and each manifest to 32 comparisons.

Primitive types are `int8`, `uint8`, `int16`, `uint16`, `int32`, `uint32`, `int64`,
`uint64`, `float32`, `float64`, and `pointer`. A field may instead name an earlier
structure declaration in `types`; optional `count` creates a fixed-size array.
Overlapping fields, unresolved type references and fields outside the declared
size are rejected. Unions, bitfields, recursive structures and callback types
are unsupported rather than guessed. Every structure needs its own provenance.

`arguments` contains 1–8 primitive type names and starts with `pointer`. The
source's first parameter is given the supplied structure-pointer type; the
target's remains `void *` during recovery. Other argument types and return types
are supplied facts, not inferred ones. `return_type` also permits `void`.
`pointer_size` must be 4 or 8 and must agree with the selected compiler spec.
The Windows headless launcher and R5900 32-bit-pointer path have been exercised;
other hosts, languages and pointer models require separate qualification.

## Run and inspect

```sh
python tools/ghidra_structure_recovery/run.py \
  --ghidra-home /tools/ghidra_12.2_PUBLIC \
  --java-home /tools/jdk-25 \
  --manifest /private/recovery-inputs/comparison.json \
  --output /private/recovery-output/new-comparison
```

Use an appropriate shell's line continuation on Windows, or enter the command on
one line. `--prepare-only` validates inputs, prepares adapters and copies the
runtime without executing recovery. Windows launcher paths cannot contain shell
metacharacters. Output is preserved on failure for diagnosis; choose a new output
directory for another run. The launcher never reopens an old project.

Read `result.json` for execution status and `proposals.json` for fields, offset
votes, source-use addresses, private disassembly and decompilation evidence.
`OBSERVED` records an engine observation; `SUPPLIED_WITH_PROVENANCE` records a
user declaration; proposed matches and fields remain `HYPOTHESIS`. A fresh run
identifier and complete case list are required before execution is reported as
successful. Task errors cause a nonzero exit even if Ghidra itself exits zero.

If `preview_apply` is true, only the new private target program's first parameter
is updated with the proposed structure after recovery, and before/after C is
exported. This preview does not apply a type to a source checkout, an existing
Ghidra project, or an accepted implementation.

## Review limits

- Nonzero source-field offsets only are selected by the upstream plugin.
- BSim can relate structurally similar code without establishing identity.
- Unused fields, nested structures and ambiguous graph correspondences can be
  missed. A correct offset vote does not guarantee a component is emitted.
- The single-function comparison does not measure false-positive rates for a
  whole-program search. Auto-analysis is disabled for these raw fragments.
- P-code quality, delay slots, EE-specific instructions, unresolved calls and
  load/store models need independent qualification. Recovery is not emulation
  equivalence, an ISA proof, or an ABI validation.
- A proposed type never promotes a source, changes progress, or replaces the
  full linked-byte gates, import identity checks, and semantic review.

Always include an independently known offset/layout change and negative controls
when qualifying a new use. Keep exact input hashes, source type provenance and
the generated adapter diff with the private evidence.

Primary references: [upstream pinned sources](https://github.com/NationalSecurityAgency/ghidra/tree/8ca9077040cc43cd790babcfccf19475622a3e9a/Ghidra/Features/BSim/src/main/java/ghidra/features/bsim/gui/structs),
[Ghidra 12.2 StructureRecovery documentation](https://github.com/NationalSecurityAgency/ghidra/blob/Ghidra_12.2_build/Ghidra/Features/BSim/src/main/help/help/topics/StructureRecovery/StructureRecovery.html).
