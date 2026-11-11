/* LEVEL_01:0x1AE2C0 -- callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1E9F90(void *p);
extern void func_1AFEF8(void *p);

void func_1AE2C0(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1E9F90(rec);
    func_1E9F90(rec + 0x38);
    if (obj[0x45] != 1)
        func_1AFEF8(rec + 0x70);
}
