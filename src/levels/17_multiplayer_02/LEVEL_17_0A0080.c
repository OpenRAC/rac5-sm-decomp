extern int D_0019D7F4;
extern int D_0019D810;

void func_0A0080(void)
{
    int *v;
    int value;

    if (D_0019D7F4 != 0) {
        D_0019D7F4--;
    }
    v = &D_0019D810;
    if (D_0019D7F4 == 0) {
        value = D_0019D810 - 8;
    } else {
        value = D_0019D810 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0019D810 > hi) {
            D_0019D810 = hi;
        }
    }
    if (D_0019D810 < 0) {
        D_0019D810 = 0;
    }
}
