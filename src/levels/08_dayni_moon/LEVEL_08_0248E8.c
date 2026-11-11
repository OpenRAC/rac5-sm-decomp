/* USA LEVEL_08.REL:0x0248E8. Two-step call wrapper. */
extern int func_025B58(int mode, int field);
extern void func_0247C8(void *object, void *value, int mode,
                        int converted, int extra);

void func_0248E8(void *object, void *value, int mode, int extra)
{
    int converted = func_025B58(mode, *(int *)((char *)object + 0xF8));
    func_0247C8(object, value, mode, converted, extra);
}
