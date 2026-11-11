/* LEVEL_24:0x18AD08 -- placement copy of LEVEL_01_1AE2C0.c: callback: resets the object's three sub records, the last one only when the object is not in state 1. */
extern void func_1BAC68(void *p);
extern void func_18C940(void *p);

void func_18AD08(unsigned char *obj)
{
    char *rec = *(char **)(obj + 0x58);

    func_1BAC68(rec);
    func_1BAC68(rec + 0x38);
    if (obj[0x45] != 1)
        func_18C940(rec + 0x70);
}
