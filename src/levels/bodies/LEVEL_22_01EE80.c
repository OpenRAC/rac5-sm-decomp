/* USA LEVEL_22.REL:0x01EE80. Two-step call wrapper. */
extern int func_0200B8(int mode, int field);
extern void func_01ED48(void *object, void *value, int mode,
                        int converted, int extra);

void func_01EE80(void *object, void *value, int mode, int extra)
{
    int converted = func_0200B8(mode, *(int *)((char *)object + 0xF8));
    func_01ED48(object, value, mode, converted, extra);
}
