/* LEVEL_20:0x01E838 -- placement copy of LEVEL_01_023F40.c. */
/* USA LEVEL_01.REL:0x023F40. Two-step call wrapper. */
extern int func_01F8D0(int mode, int field);
extern void func_01E718(void *object, void *value, int mode,
                        int converted, int extra);

void func_01E838(void *object, void *value, int mode, int extra)
{
    int converted = func_01F8D0(mode, *(int *)((char *)object + 0xF8));
    func_01E718(object, value, mode, converted, extra);
}
