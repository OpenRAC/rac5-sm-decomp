/* LEVEL_24:0x1297C8 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001D7D08;
extern int D_001D7D00;
extern int func_129A70(void);
extern int func_129598(int value);

int func_1297C8(void)
{
    if (D_001D7D08 != 0) {
        func_129A70();
        D_001D7D00 = 2;
        func_129598(1);
        return 1;
    }
    return 0;
}
