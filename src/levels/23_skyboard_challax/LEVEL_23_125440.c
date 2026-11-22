/* LEVEL_23:0x125440 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001DA488;
extern int D_001DA480;
extern int func_1256E8(void);
extern int func_125210(int value);

int func_125440(void)
{
    if (D_001DA488 != 0) {
        func_1256E8();
        D_001DA480 = 2;
        func_125210(1);
        return 1;
    }
    return 0;
}
