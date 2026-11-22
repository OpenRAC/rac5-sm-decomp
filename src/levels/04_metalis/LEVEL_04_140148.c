/* LEVEL_04:0x140148 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_002204A8;
extern int D_002204A0;
extern int func_1403F0(void);
extern int func_13FF18(int value);

int func_140148(void)
{
    if (D_002204A8 != 0) {
        func_1403F0();
        D_002204A0 = 2;
        func_13FF18(1);
        return 1;
    }
    return 0;
}
