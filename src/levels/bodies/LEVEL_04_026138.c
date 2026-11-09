/* LEVEL_04:0x026138 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_0020D0F4;
extern unsigned char D_0020D0D9;
extern int D_0020D0DC;
extern unsigned char D_0020D070;
extern int func_08B220(int a);

int func_026138(void)
{
    int r;

    if (D_0020D0F4 != 0) {
        return 0;
    }
    r = func_08B220(1);
    if (r & 8) {
        if (D_0020D0D9 == 0) {
            D_0020D0D9 = 1;
            D_0020D0DC = 0xFF;
        }
    }
    if (D_0020D0D9 == 0) {
        return 0;
    }
    if (D_0020D0DC != 0) {
        return 0;
    }
    D_0020D070 = 1;
    return 1;
}
