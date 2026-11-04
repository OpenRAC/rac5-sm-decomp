/* USA LEVEL_01.REL:0x0241D0. Two-step call wrapper. */
extern int func_0252D8(int mode, int field);
extern void func_0240B0(void *object, void *value, int mode,
                        int converted, int extra);

void func_0241D0(void *object, void *value, int mode, int extra)
{
    int converted = func_0252D8(mode, *(int *)((char *)object + 0xF8));
    func_0240B0(object, value, mode, converted, extra);
}
