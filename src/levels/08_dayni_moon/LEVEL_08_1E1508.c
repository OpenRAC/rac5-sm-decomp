/* LEVEL_08:0x1E1508 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_232B18(void *p);
extern void func_1E3140(void *p);

void func_1E1508(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_232B18(rec);
    func_232B18(rec + 0x38);
    if (obj[0x45] != 1)
        func_1E3140(rec + 0x70);
}
