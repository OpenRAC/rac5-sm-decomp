/* LEVEL_21:0x020740 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_00148BF4;
extern unsigned char D_00148BD9;
extern int D_00148BDC;
extern unsigned char D_00148B70;
extern int func_06C668(int a);

int func_020740(void)
{
    int r;

    if (D_00148BF4 != 0) {
        return 0;
    }
    r = func_06C668(1);
    if (r & 8) {
        if (D_00148BD9 == 0) {
            D_00148BD9 = 1;
            D_00148BDC = 0xFF;
        }
    }
    if (D_00148BD9 == 0) {
        return 0;
    }
    if (D_00148BDC != 0) {
        return 0;
    }
    D_00148B70 = 1;
    return 1;
}
