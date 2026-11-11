extern int D_0015B534;
extern int D_0015B550;

void func_0A08A0(void)
{
    int *v;
    int value;

    if (D_0015B534 != 0) {
        D_0015B534--;
    }
    v = &D_0015B550;
    if (D_0015B534 == 0) {
        value = D_0015B550 - 8;
    } else {
        value = D_0015B550 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0015B550 > hi) {
            D_0015B550 = hi;
        }
    }
    if (D_0015B550 < 0) {
        D_0015B550 = 0;
    }
}
