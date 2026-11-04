/* USA LEVEL_22.REL:0x01F008. Two-step call wrapper. */
extern int func_0200B8(int mode, int field);
extern void func_01EEE8(void *object, void *value, int mode,
                        int converted, int extra);

void func_01F008(void *object, void *value, int mode, int extra)
{
    int converted = func_0200B8(mode, *(int *)((char *)object + 0xF8));
    func_01EEE8(object, value, mode, converted, extra);
}
