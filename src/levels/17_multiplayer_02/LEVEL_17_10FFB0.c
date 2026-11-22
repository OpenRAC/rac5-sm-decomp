/* LEVEL_17:0x10FFB0 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001A8198;
extern int D_001A8190;
extern int func_110258(void);
extern int func_10FD80(int value);

int func_10FFB0(void)
{
    if (D_001A8198 != 0) {
        func_110258();
        D_001A8190 = 2;
        func_10FD80(1);
        return 1;
    }
    return 0;
}
