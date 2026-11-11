/* LEVEL_19:0x133A10 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_0737C8(char *record);

void func_133A10(char *item)
{
    func_0737C8(*(char **)(*(char **)(item + 0x58) + 0x44));
}
