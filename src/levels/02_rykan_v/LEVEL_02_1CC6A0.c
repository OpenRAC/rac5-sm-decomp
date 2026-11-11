/* LEVEL_02:0x1CC6A0 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1FEC28(void *p);
extern void func_1CE2D8(void *p);

void func_1CC6A0(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1FEC28(rec);
    func_1FEC28(rec + 0x38);
    if (obj[0x45] != 1)
        func_1CE2D8(rec + 0x70);
}
