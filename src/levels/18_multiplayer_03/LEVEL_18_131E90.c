/* LEVEL_18:0x131E90 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_072D30(char *record);

void func_131E90(char *item)
{
    func_072D30(*(char **)(*(char **)(item + 0x58) + 0x44));
}
