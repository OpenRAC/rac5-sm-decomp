/* USA LEVEL_20.REL:0x01E6B0. Two-step call wrapper. */
extern int func_01F8D0(int mode, int field);
extern void func_01E578(void *object, void *value, int mode,
                        int converted, int extra);

void func_01E6B0(void *object, void *value, int mode, int extra)
{
    int converted = func_01F8D0(mode, *(int *)((char *)object + 0xF8));
    func_01E578(object, value, mode, converted, extra);
}
