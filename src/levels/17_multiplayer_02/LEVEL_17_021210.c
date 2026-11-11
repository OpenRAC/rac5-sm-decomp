/* USA LEVEL_17.REL:0x021210. Two-step call wrapper. */
extern int func_0225A8(int mode, int field);
extern void func_0210D8(void *object, void *value, int mode,
                        int converted, int extra);

void func_021210(void *object, void *value, int mode, int extra)
{
    int converted = func_0225A8(mode, *(int *)((char *)object + 0xF8));
    func_0210D8(object, value, mode, converted, extra);
}
