/* USA LEVEL_10.REL:0x023740. Two-step call wrapper. */
extern int func_024C40(int mode, int field);
extern void func_023608(void *object, void *value, int mode,
                        int converted, int extra);

void func_023740(void *object, void *value, int mode, int extra)
{
    int converted = func_024C40(mode, *(int *)((char *)object + 0xF8));
    func_023608(object, value, mode, converted, extra);
}
