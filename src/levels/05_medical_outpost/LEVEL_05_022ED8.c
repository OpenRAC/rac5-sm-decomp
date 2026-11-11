/* USA LEVEL_05.REL:0x022ED8. Two-step call wrapper. */
extern int func_024270(int mode, int field);
extern void func_022DA0(void *object, void *value, int mode,
                        int converted, int extra);

void func_022ED8(void *object, void *value, int mode, int extra)
{
    int converted = func_024270(mode, *(int *)((char *)object + 0xF8));
    func_022DA0(object, value, mode, converted, extra);
}
