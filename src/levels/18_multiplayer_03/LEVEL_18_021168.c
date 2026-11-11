/* LEVEL_18:0x021168 -- placement copy of LEVEL_01_023F40.c. */
/* USA LEVEL_01.REL:0x023F40. Two-step call wrapper. */
extern int func_022270(int mode, int field);
extern void func_021048(void *object, void *value, int mode,
                        int converted, int extra);

void func_021168(void *object, void *value, int mode, int extra)
{
    int converted = func_022270(mode, *(int *)((char *)object + 0xF8));
    func_021048(object, value, mode, converted, extra);
}
