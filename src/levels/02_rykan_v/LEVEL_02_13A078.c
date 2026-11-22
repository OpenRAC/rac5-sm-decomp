/* LEVEL_02:0x13A078 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_0021C048;
extern int D_0021C040;
extern int func_13A320(void);
extern int func_139E48(int value);

int func_13A078(void)
{
    if (D_0021C048 != 0) {
        func_13A320();
        D_0021C040 = 2;
        func_139E48(1);
        return 1;
    }
    return 0;
}
