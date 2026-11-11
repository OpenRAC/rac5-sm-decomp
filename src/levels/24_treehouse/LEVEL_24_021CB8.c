/* USA LEVEL_24.REL:0x021CB8. Two-step call wrapper. */
extern int func_023058(int mode, int field);
extern void func_021B80(void *object, void *value, int mode,
                        int converted, int extra);

void func_021CB8(void *object, void *value, int mode, int extra)
{
    int converted = func_023058(mode, *(int *)((char *)object + 0xF8));
    func_021B80(object, value, mode, converted, extra);
}
