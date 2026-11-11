/* LEVEL_16:0x021B20 -- placement copy of LEVEL_01_023F40.c. */
/* USA LEVEL_01.REL:0x023F40. Two-step call wrapper. */
extern int func_022C28(int mode, int field);
extern void func_021A00(void *object, void *value, int mode,
                        int converted, int extra);

void func_021B20(void *object, void *value, int mode, int extra)
{
    int converted = func_022C28(mode, *(int *)((char *)object + 0xF8));
    func_021A00(object, value, mode, converted, extra);
}
