/* USA LEVEL_01.REL:0x023F40. Two-step call wrapper. */
extern int func_0252D8(int mode, int field);
extern void func_023E08(void *object, void *value, int mode,
                        int converted, int extra);

void func_023F40(void *object, void *value, int mode, int extra)
{
    int converted = func_0252D8(mode, *(int *)((char *)object + 0xF8));
    func_023E08(object, value, mode, converted, extra);
}
