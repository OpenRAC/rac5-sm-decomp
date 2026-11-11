/* USA LEVEL_19.REL:0x0214D0. Two-step call wrapper. */
extern int func_022868(int mode, int field);
extern void func_021398(void *object, void *value, int mode,
                        int converted, int extra);

void func_0214D0(void *object, void *value, int mode, int extra)
{
    int converted = func_022868(mode, *(int *)((char *)object + 0xF8));
    func_021398(object, value, mode, converted, extra);
}
