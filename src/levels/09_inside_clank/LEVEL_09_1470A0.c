/* LEVEL_09:0x1470A0 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_07D5B8(char *record);

void func_1470A0(char *item)
{
    func_07D5B8(*(char **)(*(char **)(item + 0x58) + 0x44));
}
