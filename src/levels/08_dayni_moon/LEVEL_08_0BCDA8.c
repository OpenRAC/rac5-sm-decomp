extern int D_00245074;
extern int D_00245090;

void func_0BCDA8(void)
{
    int *v;
    int value;

    if (D_00245074 != 0) {
        D_00245074--;
    }
    v = &D_00245090;
    if (D_00245074 == 0) {
        value = D_00245090 - 8;
    } else {
        value = D_00245090 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00245090 > hi) {
            D_00245090 = hi;
        }
    }
    if (D_00245090 < 0) {
        D_00245090 = 0;
    }
}
