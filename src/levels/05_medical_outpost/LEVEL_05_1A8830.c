/* LEVEL_05:0x1A8830 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1D9388(void *p);
extern void func_1AA468(void *p);

void func_1A8830(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1D9388(rec);
    func_1D9388(rec + 0x38);
    if (obj[0x45] != 1)
        func_1AA468(rec + 0x70);
}
