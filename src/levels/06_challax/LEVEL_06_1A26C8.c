/* LEVEL_06:0x1A26C8 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1D8ED8(void *p);
extern void func_1A4300(void *p);

void func_1A26C8(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1D8ED8(rec);
    func_1D8ED8(rec + 0x38);
    if (obj[0x45] != 1)
        func_1A4300(rec + 0x70);
}
