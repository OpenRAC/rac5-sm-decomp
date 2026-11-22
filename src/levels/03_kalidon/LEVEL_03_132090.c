/* LEVEL_03:0x132090 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_0021F708;
extern int D_0021F700;
extern int func_132338(void);
extern int func_131E60(int value);

int func_132090(void)
{
    if (D_0021F708 != 0) {
        func_132338();
        D_0021F700 = 2;
        func_131E60(1);
        return 1;
    }
    return 0;
}
