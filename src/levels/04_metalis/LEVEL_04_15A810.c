/* LEVEL_04:0x15A810 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_083F98(char *record);

void func_15A810(char *item)
{
    func_083F98(*(char **)(*(char **)(item + 0x58) + 0x44));
}
