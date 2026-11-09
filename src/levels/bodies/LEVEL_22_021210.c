/* LEVEL_22:0x021210 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001532F4;
extern unsigned char D_001532D9;
extern int D_001532DC;
extern unsigned char D_00153270;
extern int func_0793A0(int a);

int func_021210(void)
{
    int r;

    if (D_001532F4 != 0) {
        return 0;
    }
    r = func_0793A0(1);
    if (r & 8) {
        if (D_001532D9 == 0) {
            D_001532D9 = 1;
            D_001532DC = 0xFF;
        }
    }
    if (D_001532D9 == 0) {
        return 0;
    }
    if (D_001532DC != 0) {
        return 0;
    }
    D_00153270 = 1;
    return 1;
}
