/* LEVEL_02:0x0BCFE8 -- placement copy of LEVEL_01_0B2220.c: placement copy of LEVEL_02_0B8B30.c. */
extern int D_002116BC;
extern int D_002116C8;

void func_0BCFE8(void)
{
    int *v;
    int value;

    if (D_002116BC != 0) {
        D_002116BC--;
    }
    v = &D_002116C8;
    if (D_002116BC == 0) {
        value = D_002116C8 - 8;
    } else {
        value = D_002116C8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_002116C8 > hi) {
            D_002116C8 = hi;
        }
    }
    if (D_002116C8 < 0) {
        D_002116C8 = 0;
    }
}
