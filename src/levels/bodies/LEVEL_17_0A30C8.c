extern int D_0019D9E4;
extern int D_0019D9E8;

void func_0A30C8(void)
{
    int *v;
    int value;

    if (D_0019D9E4 != 0) {
        D_0019D9E4--;
    }
    v = &D_0019D9E8;
    if (D_0019D9E4 == 0) {
        value = D_0019D9E8 - 8;
    } else {
        value = D_0019D9E8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0019D9E8 > hi) {
            D_0019D9E8 = hi;
        }
    }
    if (D_0019D9E8 < 0) {
        D_0019D9E8 = 0;
    }
}
