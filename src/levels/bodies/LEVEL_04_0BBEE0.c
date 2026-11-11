/* LEVEL_04:0x0BBEE0 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_00215BBC;
extern int D_00215BC8;

void func_0BBEE0(void)
{
    int *v;
    int value;

    if (D_00215BBC != 0) {
        D_00215BBC--;
    }
    v = &D_00215BC8;
    if (D_00215BBC == 0) {
        value = D_00215BC8 - 8;
    } else {
        value = D_00215BC8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00215BC8 > hi) {
            D_00215BC8 = hi;
        }
    }
    if (D_00215BC8 < 0) {
        D_00215BC8 = 0;
    }
}
