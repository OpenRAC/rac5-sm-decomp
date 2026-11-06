extern int D_001EB6E4;
extern int D_001EB6E8;

void func_0B32C8(void)
{
    int *v;
    int value;

    if (D_001EB6E4 != 0) {
        D_001EB6E4--;
    }
    v = &D_001EB6E8;
    if (D_001EB6E4 == 0) {
        value = D_001EB6E8 - 8;
    } else {
        value = D_001EB6E8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001EB6E8 > hi) {
            D_001EB6E8 = hi;
        }
    }
    if (D_001EB6E8 < 0) {
        D_001EB6E8 = 0;
    }
}
