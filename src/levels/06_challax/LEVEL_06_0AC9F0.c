extern int D_001EB0B4;
extern int D_001EB0D0;

void func_0AC9F0(void)
{
    int *v;
    int value;

    if (D_001EB0B4 != 0) {
        D_001EB0B4--;
    }
    v = &D_001EB0D0;
    if (D_001EB0B4 == 0) {
        value = D_001EB0D0 - 8;
    } else {
        value = D_001EB0D0 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001EB0D0 > hi) {
            D_001EB0D0 = hi;
        }
    }
    if (D_001EB0D0 < 0) {
        D_001EB0D0 = 0;
    }
}
