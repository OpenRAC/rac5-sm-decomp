extern int D_0015B6E4;
extern int D_0015B6E8;

void func_0A3300(void)
{
    int *v;
    int value;

    if (D_0015B6E4 != 0) {
        D_0015B6E4--;
    }
    v = &D_0015B6E8;
    if (D_0015B6E4 == 0) {
        value = D_0015B6E8 - 8;
    } else {
        value = D_0015B6E8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0015B6E8 > hi) {
            D_0015B6E8 = hi;
        }
    }
    if (D_0015B6E8 < 0) {
        D_0015B6E8 = 0;
    }
}
