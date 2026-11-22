/* LEVEL_22:0x10B198 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_00166068;
extern int D_00166060;
extern int func_10B440(void);
extern int func_10AF68(int value);

int func_10B198(void)
{
    if (D_00166068 != 0) {
        func_10B440();
        D_00166060 = 2;
        func_10AF68(1);
        return 1;
    }
    return 0;
}
