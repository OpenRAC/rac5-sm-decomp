/* USA LEVEL_02.REL:0x024B30. Two-step call wrapper. */
extern int func_025C38(int mode, int field);
extern void func_024A10(void *object, void *value, int mode,
                        int converted, int extra);

void func_024B30(void *object, void *value, int mode, int extra)
{
    int converted = func_025C38(mode, *(int *)((char *)object + 0xF8));
    func_024A10(object, value, mode, converted, extra);
}
