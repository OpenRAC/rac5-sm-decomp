extern int D_001AA1F4;
extern int D_001AA210;

void func_0A0B88(void)
{
    int *v;
    int value;

    if (D_001AA1F4 != 0) {
        D_001AA1F4--;
    }
    v = &D_001AA210;
    if (D_001AA1F4 == 0) {
        value = D_001AA210 - 8;
    } else {
        value = D_001AA210 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AA210 > hi) {
            D_001AA210 = hi;
        }
    }
    if (D_001AA210 < 0) {
        D_001AA210 = 0;
    }
}
