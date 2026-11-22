/* LEVEL_20:0x0E3820 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_00117258;
extern int D_00117250;
extern int func_0E3AC8(void);
extern int func_0E35F0(int value);

int func_0E3820(void)
{
    if (D_00117258 != 0) {
        func_0E3AC8();
        D_00117250 = 2;
        func_0E35F0(1);
        return 1;
    }
    return 0;
}
