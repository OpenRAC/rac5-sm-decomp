/* LEVEL_17:0x132838 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_073DB0(char *record);

void func_132838(char *item)
{
    func_073DB0(*(char **)(*(char **)(item + 0x58) + 0x44));
}
