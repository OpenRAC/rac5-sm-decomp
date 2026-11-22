/* LEVEL_06:0x12A398 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001F5C88;
extern int D_001F5C80;
extern int func_12A640(void);
extern int func_12A168(int value);

int func_12A398(void)
{
    if (D_001F5C88 != 0) {
        func_12A640();
        D_001F5C80 = 2;
        func_12A168(1);
        return 1;
    }
    return 0;
}
