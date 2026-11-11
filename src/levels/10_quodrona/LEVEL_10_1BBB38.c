/* LEVEL_10:0x1BBB38 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1F2FE8(void *p);
extern void func_1BD850(void *p);

void func_1BBB38(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1F2FE8(rec);
    func_1F2FE8(rec + 0x38);
    if (obj[0x45] != 1)
        func_1BD850(rec + 0x70);
}
