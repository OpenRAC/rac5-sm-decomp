/* USA LEVEL_03.REL:0x023CA8. Two-step call wrapper. */
extern int func_0251A8(int mode, int field);
extern void func_023B70(void *object, void *value, int mode,
                        int converted, int extra);

void func_023CA8(void *object, void *value, int mode, int extra)
{
    int converted = func_0251A8(mode, *(int *)((char *)object + 0xF8));
    func_023B70(object, value, mode, converted, extra);
}
