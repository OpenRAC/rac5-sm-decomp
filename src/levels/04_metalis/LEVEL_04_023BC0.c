/* USA LEVEL_04.REL:0x023BC0. Two-step call wrapper. */
extern int func_024F58(int mode, int field);
extern void func_023A88(void *object, void *value, int mode,
                        int converted, int extra);

void func_023BC0(void *object, void *value, int mode, int extra)
{
    int converted = func_024F58(mode, *(int *)((char *)object + 0xF8));
    func_023A88(object, value, mode, converted, extra);
}
