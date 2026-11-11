/* LEVEL_03:0x14D550 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_080918(char *record);

void func_14D550(char *item)
{
    func_080918(*(char **)(*(char **)(item + 0x58) + 0x44));
}
