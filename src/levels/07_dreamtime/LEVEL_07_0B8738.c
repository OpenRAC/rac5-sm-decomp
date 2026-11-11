/* LEVEL_07:0x0B8738 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_002109FC;
extern int D_00210A08;

void func_0B8738(void)
{
    int *v;
    int value;

    if (D_002109FC != 0) {
        D_002109FC--;
    }
    v = &D_00210A08;
    if (D_002109FC == 0) {
        value = D_00210A08 - 8;
    } else {
        value = D_00210A08 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00210A08 > hi) {
            D_00210A08 = hi;
        }
    }
    if (D_00210A08 < 0) {
        D_00210A08 = 0;
    }
}
