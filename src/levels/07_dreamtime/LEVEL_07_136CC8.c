/* LEVEL_07:0x136CC8 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_0021B388;
extern int D_0021B380;
extern int func_136F70(void);
extern int func_136A98(int value);

int func_136CC8(void)
{
    if (D_0021B388 != 0) {
        func_136F70();
        D_0021B380 = 2;
        func_136A98(1);
        return 1;
    }
    return 0;
}
