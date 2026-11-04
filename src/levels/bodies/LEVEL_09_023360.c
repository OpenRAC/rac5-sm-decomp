/* USA LEVEL_09.REL:0x023360. Two-step call wrapper. */
extern int func_0245D0(int mode, int field);
extern void func_023240(void *object, void *value, int mode,
                        int converted, int extra);

void func_023360(void *object, void *value, int mode, int extra)
{
    int converted = func_0245D0(mode, *(int *)((char *)object + 0xF8));
    func_023240(object, value, mode, converted, extra);
}
