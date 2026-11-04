/* USA LEVEL_23.REL:0x022270. Two-step call wrapper. */
extern int func_023320(int mode, int field);
extern void func_022150(void *object, void *value, int mode,
                        int converted, int extra);

void func_022270(void *object, void *value, int mode, int extra)
{
    int converted = func_023320(mode, *(int *)((char *)object + 0xF8));
    func_022150(object, value, mode, converted, extra);
}
