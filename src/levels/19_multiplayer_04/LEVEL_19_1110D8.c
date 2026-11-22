/* LEVEL_19:0x1110D8 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001B5D18;
extern int D_001B5D10;
extern int func_111380(void);
extern int func_110EA8(int value);

int func_1110D8(void)
{
    if (D_001B5D18 != 0) {
        func_111380();
        D_001B5D10 = 2;
        func_110EA8(1);
        return 1;
    }
    return 0;
}
