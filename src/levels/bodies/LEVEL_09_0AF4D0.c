extern int D_001E5FB4;
extern int D_001E5FD0;

void func_0AF4D0(void)
{
    int *v;
    int value;

    if (D_001E5FB4 != 0) {
        D_001E5FB4--;
    }
    v = &D_001E5FD0;
    if (D_001E5FB4 == 0) {
        value = D_001E5FD0 - 8;
    } else {
        value = D_001E5FD0 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001E5FD0 > hi) {
            D_001E5FD0 = hi;
        }
    }
    if (D_001E5FD0 < 0) {
        D_001E5FD0 = 0;
    }
}
