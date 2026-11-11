extern int D_00211324;
extern int D_00211328;

void func_0BB618(void)
{
    int *v;
    int value;

    if (D_00211324 != 0) {
        D_00211324--;
    }
    v = &D_00211328;
    if (D_00211324 == 0) {
        value = D_00211328 - 8;
    } else {
        value = D_00211328 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00211328 > hi) {
            D_00211328 = hi;
        }
    }
    if (D_00211328 < 0) {
        D_00211328 = 0;
    }
}
