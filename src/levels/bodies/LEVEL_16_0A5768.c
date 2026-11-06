extern int D_001AA77C;
extern int D_001AA788;

void func_0A5768(void)
{
    int *v;
    int value;

    if (D_001AA77C != 0) {
        D_001AA77C--;
    }
    v = &D_001AA788;
    if (D_001AA77C == 0) {
        value = D_001AA788 - 8;
    } else {
        value = D_001AA788 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AA788 > hi) {
            D_001AA788 = hi;
        }
    }
    if (D_001AA788 < 0) {
        D_001AA788 = 0;
    }
}
