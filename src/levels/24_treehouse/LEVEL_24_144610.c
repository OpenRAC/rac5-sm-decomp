/* LEVEL_24:0x144610 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_07B218(char *record);

void func_144610(char *item)
{
    func_07B218(*(char **)(*(char **)(item + 0x58) + 0x44));
}
