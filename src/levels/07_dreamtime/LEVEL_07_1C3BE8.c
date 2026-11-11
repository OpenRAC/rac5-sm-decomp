/* LEVEL_07:0x1C3BE8 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1FE260(void *p);
extern void func_1C5820(void *p);

void func_1C3BE8(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1FE260(rec);
    func_1FE260(rec + 0x38);
    if (obj[0x45] != 1)
        func_1C5820(rec + 0x70);
}
