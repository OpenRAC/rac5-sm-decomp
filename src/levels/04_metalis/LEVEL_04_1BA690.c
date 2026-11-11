/* LEVEL_04:0x1BA690 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_203150(void *p);
extern void func_1BC2C8(void *p);

void func_1BA690(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_203150(rec);
    func_203150(rec + 0x38);
    if (obj[0x45] != 1)
        func_1BC2C8(rec + 0x70);
}
