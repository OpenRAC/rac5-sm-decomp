/* LEVEL_08:0x145200 -- placement copy of LEVEL_01_133CC8.c: when the active flag is set, runs the start sequence, sets mode 2 and reports 1. */
extern unsigned char D_0024FF48;
extern int D_0024FF40;
extern int func_1454A8(void);
extern int func_144FD0(int value);

int func_145200(void)
{
    if (D_0024FF48 != 0) {
        func_1454A8();
        D_0024FF40 = 2;
        func_144FD0(1);
        return 1;
    }
    return 0;
}
