/* LEVEL_23:0x150F70 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_077F38(char *record);

void func_150F70(char *item)
{
    func_077F38(*(char **)(*(char **)(item + 0x58) + 0x44));
}
