extern int D_0010C8D4;
extern int D_0010C8F0;

void func_08B280(void)
{
    int *v;
    int value;

    if (D_0010C8D4 != 0) {
        D_0010C8D4--;
    }
    v = &D_0010C8F0;
    if (D_0010C8D4 == 0) {
        value = D_0010C8F0 - 8;
    } else {
        value = D_0010C8F0 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0010C8F0 > hi) {
            D_0010C8F0 = hi;
        }
    }
    if (D_0010C8F0 < 0) {
        D_0010C8F0 = 0;
    }
}
