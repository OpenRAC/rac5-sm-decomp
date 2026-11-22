/* LEVEL_16:0x110A38 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001B4B98;
extern int D_001B4B90;
extern int func_110CE0(void);
extern int func_110808(int value);

int func_110A38(void)
{
    if (D_001B4B98 != 0) {
        func_110CE0();
        D_001B4B90 = 2;
        func_110808(1);
        return 1;
    }
    return 0;
}
