extern int D_00214834;
extern int D_00214850;

void func_0B2008(void)
{
    int *v;
    int value;

    if (D_00214834 != 0) {
        D_00214834--;
    }
    v = &D_00214850;
    if (D_00214834 == 0) {
        value = D_00214850 - 8;
    } else {
        value = D_00214850 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00214850 > hi) {
            D_00214850 = hi;
        }
    }
    if (D_00214850 < 0) {
        D_00214850 = 0;
    }
}
