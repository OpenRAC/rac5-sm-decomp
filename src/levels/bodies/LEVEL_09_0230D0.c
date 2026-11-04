/* USA LEVEL_09.REL:0x0230D0. Two-step call wrapper. */
extern int func_0245D0(int mode, int field);
extern void func_022F98(void *object, void *value, int mode,
                        int converted, int extra);

void func_0230D0(void *object, void *value, int mode, int extra)
{
    int converted = func_0245D0(mode, *(int *)((char *)object + 0xF8));
    func_022F98(object, value, mode, converted, extra);
}
