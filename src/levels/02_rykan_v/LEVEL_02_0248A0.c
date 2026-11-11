/* USA LEVEL_02.REL:0x0248A0. Two-step call wrapper. */
extern int func_025C38(int mode, int field);
extern void func_024768(void *object, void *value, int mode,
                        int converted, int extra);

void func_0248A0(void *object, void *value, int mode, int extra)
{
    int converted = func_025C38(mode, *(int *)((char *)object + 0xF8));
    func_024768(object, value, mode, converted, extra);
}
