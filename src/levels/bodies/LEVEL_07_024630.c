/* USA LEVEL_07.REL:0x024630. Two-step call wrapper. */
extern int func_0258A0(int mode, int field);
extern void func_024510(void *object, void *value, int mode,
                        int converted, int extra);

void func_024630(void *object, void *value, int mode, int extra)
{
    int converted = func_0258A0(mode, *(int *)((char *)object + 0xF8));
    func_024510(object, value, mode, converted, extra);
}
