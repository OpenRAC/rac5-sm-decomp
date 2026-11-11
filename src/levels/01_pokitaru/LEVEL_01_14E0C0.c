/* LEVEL_01:0x14E0C0 -- forwards the record referenced by the object's data block to the record handler. */
extern void func_080B38(char *record);

void func_14E0C0(char *item)
{
    func_080B38(*(char **)(*(char **)(item + 0x58) + 0x44));
}
