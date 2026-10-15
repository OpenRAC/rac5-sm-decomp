# Optional independent R5900 boundary pass

`ExportFunctionBounds.java` exports only function-entry and body-boundary
metadata from a private Ghidra R5900 analysis. It writes no disassembly or
game bytes. Ghidra and a compatible R5900 language extension must be
installed separately; neither is distributed by this repository.

First run `python tools/level_function_inventory.py --write
baserom/SCUS_976.15.iso`. It verifies the pinned image and creates private
`build/level-functions/*.code.bin` slices for all 21 modules. Keep those files
and the Ghidra project local. Example PowerShell headless invocation from the
repository root (replace the install and private-project paths):

```powershell
$repo = (Get-Location).Path
$inputs = Get-ChildItem build/level-functions -Filter '*.code.bin' -File |
  Sort-Object Name | ForEach-Object FullName
$rac5HeadlessArgs = @('D:\private\ghidra-projects', 'rac5-levels', '-import') +
  $inputs + @('-loader', 'BinaryLoader', '-loader-baseAddr', '0x80',
    '-loader-blockName', 'code', '-processor', 'r5900:LE:32:default',
    '-cspec', 'default', '-scriptPath', "$repo\tools\ghidra",
    '-postScript', 'ExportFunctionBounds.java', "$repo\build\level-functions",
    '-analysisTimeoutPerFile', '180', '-max-cpu', '4')
& 'C:\path\to\ghidra\support\analyzeHeadless.bat' @rac5HeadlessArgs
```

The script writes `<module>.code.bin.ghidra.tsv` in the ignored build
directory. Auto-analysis can misidentify embedded data and cannot read the
data sections omitted from these code slices; warnings about unreadable data
addresses are expected. Its boundaries are an **independent candidate view**,
not ground truth. Add the optional second script argument `ranges` to export
Ghidra's noncontiguous body-address ranges for private investigation. The
committed cross-check uses the default five-column form. Compare it with the
static call/relocation analysis using:

```sh
python tools/level_ghidra_crosscheck.py --write
python tools/level_translation_families.py --write baserom/SCUS_976.15.iso
```

Both commands commit only compact metadata summaries when the maintainer
chooses to publish them; detailed disagreement and group worklists remain
under ignored `build/level-functions/`.
