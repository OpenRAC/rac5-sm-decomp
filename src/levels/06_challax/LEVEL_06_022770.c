/* USA LEVEL_06.REL:0x022770. Two-step call wrapper. */
extern int func_0239E0(int mode, int field);
extern void func_022650(void *object, void *value, int mode,
                        int converted, int extra);

void func_022770(void *object, void *value, int mode, int extra)
{
    int converted = func_0239E0(mode, *(int *)((char *)object + 0xF8));
    func_022650(object, value, mode, converted, extra);
}
