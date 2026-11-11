/* LEVEL_06:0x1447B8 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_07A718(char *record);

void func_1447B8(char *item)
{
    func_07A718(*(char **)(*(char **)(item + 0x58) + 0x44));
}
