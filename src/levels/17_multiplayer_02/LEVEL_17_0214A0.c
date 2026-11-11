/* LEVEL_17:0x0214A0 -- placement copy of LEVEL_01_023F40.c. */
/* USA LEVEL_01.REL:0x023F40. Two-step call wrapper. */
extern int func_0225A8(int mode, int field);
extern void func_021380(void *object, void *value, int mode,
                        int converted, int extra);

void func_0214A0(void *object, void *value, int mode, int extra)
{
    int converted = func_0225A8(mode, *(int *)((char *)object + 0xF8));
    func_021380(object, value, mode, converted, extra);
}
