/* USA LEVEL_06.REL:0x0224E0. Two-step call wrapper. */
extern int func_0239E0(int mode, int field);
extern void func_0223A8(void *object, void *value, int mode,
                        int converted, int extra);

void func_0224E0(void *object, void *value, int mode, int extra)
{
    int converted = func_0239E0(mode, *(int *)((char *)object + 0xF8));
    func_0223A8(object, value, mode, converted, extra);
}
