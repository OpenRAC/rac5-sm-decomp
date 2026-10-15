# USA PS2 level modules: measured SNR2 metadata

The verified `SCUS_976.15` disc has 21 `LVL/*.REL` files: `FRONTEND.REL` and
20 numbered level modules. All begin with `SNR2`, a **SN ProDG relocatable
module format**, rather than an ELF header. The field names used by
[`tools/rel.py`](../tools/rel.py) follow the public
[SNR2 loader by emoose](https://github.com/emoose/re4-research/blob/master/prodg-rel.py)
(BSD-3-Clause). The parser itself was written here and tested against all 21
files; this is a format reference, not imported game code.

For this USA image, the first 60 bytes contain the signature, relocation-table
offset and count, symbol-table offset and count, and a file-size field at
`0x2C`. Every file's declared size equals its actual size. Each relocation
record occupies 12 bytes; the relocation table ends exactly where the symbol
table begins. The 21 files hold **85,694 relocation records**: type 2 (483),
type 4 (73,765), type 5 (5,329) and type 6 (6,117). Every recorded symbol
index is in range. These are structure checks, not relocated game images.

The symbol tables expose **41 nonzero-address exports**: one
`lib_main__FiPPc` in each module and `G_wadFilename` in each of the 20 level
modules. `G_wadFilename` is data, so an export is not automatically a function.
The tables in [`config/levels/`](../config/levels/) contain module hashes and
these exported names with **module-relative offsets**, not linked RAM
addresses. Regenerate or verify them with:

```sh
python tools/rel.py inspect baserom/SCUS_976.15.iso
python tools/rel.py catalogue baserom/SCUS_976.15.iso
python tools/rel.py catalogue baserom/SCUS_976.15.iso --write
```

The next research step is the loader's placement of code/data and the meaning
of each relocation during loading. This metadata does **not** establish
function boundaries, sizes, shared-function identities, or a matching build.
