extern int D_002051B4;
extern int D_002051D0;

void func_0B3338(void)
{
    int *v;
    int value;

    if (D_002051B4 != 0) {
        D_002051B4--;
    }
    v = &D_002051D0;
    if (D_002051B4 == 0) {
        value = D_002051D0 - 8;
    } else {
        value = D_002051D0 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_002051D0 > hi) {
            D_002051D0 = hi;
        }
    }
    if (D_002051D0 < 0) {
        D_002051D0 = 0;
    }
}
