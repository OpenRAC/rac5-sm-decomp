/* LEVEL_07:0x1513E8 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_082CA0(char *record);

void func_1513E8(char *item)
{
    func_082CA0(*(char **)(*(char **)(item + 0x58) + 0x44));
}
