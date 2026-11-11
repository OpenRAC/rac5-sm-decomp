/* LEVEL_05:0x149AB0 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_07E1D8(char *record);

void func_149AB0(char *item)
{
    func_07E1D8(*(char **)(*(char **)(item + 0x58) + 0x44));
}
