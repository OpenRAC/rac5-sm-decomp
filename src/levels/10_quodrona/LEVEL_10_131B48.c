/* LEVEL_10:0x131B48 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_0020FCE8;
extern int D_0020FCE0;
extern int func_131DF0(void);
extern int func_131918(int value);

int func_131B48(void)
{
    if (D_0020FCE8 != 0) {
        func_131DF0();
        D_0020FCE0 = 2;
        func_131918(1);
        return 1;
    }
    return 0;
}
