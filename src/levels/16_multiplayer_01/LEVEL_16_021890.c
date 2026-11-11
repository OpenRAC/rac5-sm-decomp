/* USA LEVEL_16.REL:0x021890. Two-step call wrapper. */
extern int func_022C28(int mode, int field);
extern void func_021758(void *object, void *value, int mode,
                        int converted, int extra);

void func_021890(void *object, void *value, int mode, int extra)
{
    int converted = func_022C28(mode, *(int *)((char *)object + 0xF8));
    func_021758(object, value, mode, converted, extra);
}
