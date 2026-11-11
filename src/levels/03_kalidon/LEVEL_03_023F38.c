/* USA LEVEL_03.REL:0x023F38. Two-step call wrapper. */
extern int func_0251A8(int mode, int field);
extern void func_023E18(void *object, void *value, int mode,
                        int converted, int extra);

void func_023F38(void *object, void *value, int mode, int extra)
{
    int converted = func_0251A8(mode, *(int *)((char *)object + 0xF8));
    func_023E18(object, value, mode, converted, extra);
}
