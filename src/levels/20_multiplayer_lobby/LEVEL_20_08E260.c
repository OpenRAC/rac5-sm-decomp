extern int D_0010CAC4;
extern int D_0010CAC8;

void func_08E260(void)
{
    int *v;
    int value;

    if (D_0010CAC4 != 0) {
        D_0010CAC4--;
    }
    v = &D_0010CAC8;
    if (D_0010CAC4 == 0) {
        value = D_0010CAC8 - 8;
    } else {
        value = D_0010CAC8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0010CAC8 > hi) {
            D_0010CAC8 = hi;
        }
    }
    if (D_0010CAC8 < 0) {
        D_0010CAC8 = 0;
    }
}
