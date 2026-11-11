extern int D_001AA3E4;
extern int D_001AA3E8;

void func_0A3BE8(void)
{
    int *v;
    int value;

    if (D_001AA3E4 != 0) {
        D_001AA3E4--;
    }
    v = &D_001AA3E8;
    if (D_001AA3E4 == 0) {
        value = D_001AA3E8 - 8;
    } else {
        value = D_001AA3E8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AA3E8 > hi) {
            D_001AA3E8 = hi;
        }
    }
    if (D_001AA3E8 < 0) {
        D_001AA3E8 = 0;
    }
}
