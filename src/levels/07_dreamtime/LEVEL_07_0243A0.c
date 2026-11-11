/* USA LEVEL_07.REL:0x0243A0. Two-step call wrapper. */
extern int func_0258A0(int mode, int field);
extern void func_024268(void *object, void *value, int mode,
                        int converted, int extra);

void func_0243A0(void *object, void *value, int mode, int extra)
{
    int converted = func_0258A0(mode, *(int *)((char *)object + 0xF8));
    func_024268(object, value, mode, converted, extra);
}
