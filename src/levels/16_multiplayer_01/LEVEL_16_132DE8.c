/* LEVEL_16:0x132DE8 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_073680(char *record);

void func_132DE8(char *item)
{
    func_073680(*(char **)(*(char **)(item + 0x58) + 0x44));
}
