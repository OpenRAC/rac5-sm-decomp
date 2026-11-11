/* LEVEL_03:0x1BFC68 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_202620(void *p);
extern void func_1C18A0(void *p);

void func_1BFC68(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_202620(rec);
    func_202620(rec + 0x38);
    if (obj[0x45] != 1)
        func_1C18A0(rec + 0x70);
}
