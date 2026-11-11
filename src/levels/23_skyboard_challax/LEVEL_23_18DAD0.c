/* LEVEL_23:0x18DAD0 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1B9F38(void *p);
extern void func_18F708(void *p);

void func_18DAD0(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1B9F38(rec);
    func_1B9F38(rec + 0x38);
    if (obj[0x45] != 1)
        func_18F708(rec + 0x70);
}
