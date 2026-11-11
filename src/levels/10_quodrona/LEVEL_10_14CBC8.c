/* LEVEL_10:0x14CBC8 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_081168(char *record);

void func_14CBC8(char *item)
{
    func_081168(*(char **)(*(char **)(item + 0x58) + 0x44));
}
