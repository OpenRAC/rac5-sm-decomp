/* USA LEVEL_15.REL:0x01E3C8. Two-step call wrapper. */
extern int func_01F5E8(int mode, int field);
extern void func_01E290(void *object, void *value, int mode,
                        int converted, int extra);

void func_01E3C8(void *object, void *value, int mode, int extra)
{
    int converted = func_01F5E8(mode, *(int *)((char *)object + 0xF8));
    func_01E290(object, value, mode, converted, extra);
}
