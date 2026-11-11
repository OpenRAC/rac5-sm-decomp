extern int D_00150FE4;
extern int D_00150FE8;

void func_0952C0(void)
{
    int *v;
    int value;

    if (D_00150FE4 != 0) {
        D_00150FE4--;
    }
    v = &D_00150FE8;
    if (D_00150FE4 == 0) {
        value = D_00150FE8 - 8;
    } else {
        value = D_00150FE8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00150FE8 > hi) {
            D_00150FE8 = hi;
        }
    }
    if (D_00150FE8 < 0) {
        D_00150FE8 = 0;
    }
}
