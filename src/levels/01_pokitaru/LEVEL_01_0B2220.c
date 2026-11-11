/* LEVEL_01:0x0B2220 -- placement copy of LEVEL_02_0B8B30.c. */
extern int D_001FC1B4;
extern int D_001FC1D0;

void func_0B2220(void)
{
    int *v;
    int value;

    if (D_001FC1B4 != 0) {
        D_001FC1B4--;
    }
    v = &D_001FC1D0;
    if (D_001FC1B4 == 0) {
        value = D_001FC1D0 - 8;
    } else {
        value = D_001FC1D0 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001FC1D0 > hi) {
            D_001FC1D0 = hi;
        }
    }
    if (D_001FC1D0 < 0) {
        D_001FC1D0 = 0;
    }
}
