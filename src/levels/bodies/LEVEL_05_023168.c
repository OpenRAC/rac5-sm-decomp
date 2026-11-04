/* USA LEVEL_05.REL:0x023168. Two-step call wrapper. */
extern int func_024270(int mode, int field);
extern void func_023048(void *object, void *value, int mode,
                        int converted, int extra);

void func_023168(void *object, void *value, int mode, int extra)
{
    int converted = func_024270(mode, *(int *)((char *)object + 0xF8));
    func_023048(object, value, mode, converted, extra);
}
