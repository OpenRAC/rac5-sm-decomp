/* LEVEL_20:0x020CC0 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_0010415C;
extern unsigned char D_00104141;
extern int D_00104144;
extern unsigned char D_001040D8;
extern int func_067138(int a);

int func_020CC0(void)
{
    int r;

    if (D_0010415C != 0) {
        return 0;
    }
    r = func_067138(1);
    if (r & 8) {
        if (D_00104141 == 0) {
            D_00104141 = 1;
            D_00104144 = 0xFF;
        }
    }
    if (D_00104141 == 0) {
        return 0;
    }
    if (D_00104144 != 0) {
        return 0;
    }
    D_001040D8 = 1;
    return 1;
}
