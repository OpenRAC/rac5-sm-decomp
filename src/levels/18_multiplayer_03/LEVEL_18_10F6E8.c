/* LEVEL_18:0x10F6E8 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001B6018;
extern int D_001B6010;
extern int func_10F990(void);
extern int func_10F4B8(int value);

int func_10F6E8(void)
{
    if (D_001B6018 != 0) {
        func_10F990();
        D_001B6010 = 2;
        func_10F4B8(1);
        return 1;
    }
    return 0;
}
