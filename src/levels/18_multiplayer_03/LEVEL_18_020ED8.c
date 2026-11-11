/* USA LEVEL_18.REL:0x020ED8. Two-step call wrapper. */
extern int func_022270(int mode, int field);
extern void func_020DA0(void *object, void *value, int mode,
                        int converted, int extra);

void func_020ED8(void *object, void *value, int mode, int extra)
{
    int converted = func_022270(mode, *(int *)((char *)object + 0xF8));
    func_020DA0(object, value, mode, converted, extra);
}
