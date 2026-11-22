/* LEVEL_15:0x0F2B90 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_0015B9E8;
extern int D_0015B9E0;
extern int func_0F2E38(void);
extern int func_0F2960(int value);

int func_0F2B90(void)
{
    if (D_0015B9E8 != 0) {
        func_0F2E38();
        D_0015B9E0 = 2;
        func_0F2960(1);
        return 1;
    }
    return 0;
}
