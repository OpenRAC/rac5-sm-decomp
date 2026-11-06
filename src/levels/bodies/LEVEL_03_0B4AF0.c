extern int D_002149E4;
extern int D_002149E8;

void func_0B4AF0(void)
{
    int *v;
    int value;

    if (D_002149E4 != 0) {
        D_002149E4--;
    }
    v = &D_002149E8;
    if (D_002149E4 == 0) {
        value = D_002149E8 - 8;
    } else {
        value = D_002149E8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_002149E8 > hi) {
            D_002149E8 = hi;
        }
    }
    if (D_002149E8 < 0) {
        D_002149E8 = 0;
    }
}
