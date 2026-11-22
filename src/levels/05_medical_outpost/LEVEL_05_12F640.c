/* LEVEL_05:0x12F640 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_001F6108;
extern int D_001F6100;
extern int func_12F8E8(void);
extern int func_12F410(int value);

int func_12F640(void)
{
    if (D_001F6108 != 0) {
        func_12F8E8();
        D_001F6100 = 2;
        func_12F410(1);
        return 1;
    }
    return 0;
}
