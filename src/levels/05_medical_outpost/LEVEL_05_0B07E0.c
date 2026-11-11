extern int D_001EB534;
extern int D_001EB550;

void func_0B07E0(void)
{
    int *v;
    int value;

    if (D_001EB534 != 0) {
        D_001EB534--;
    }
    v = &D_001EB550;
    if (D_001EB534 == 0) {
        value = D_001EB550 - 8;
    } else {
        value = D_001EB550 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001EB550 > hi) {
            D_001EB550 = hi;
        }
    }
    if (D_001EB550 < 0) {
        D_001EB550 = 0;
    }
}
