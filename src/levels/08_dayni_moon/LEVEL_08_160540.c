/* LEVEL_08:0x160540 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_088AA8(char *record);

void func_160540(char *item)
{
    func_088AA8(*(char **)(*(char **)(item + 0x58) + 0x44));
}
