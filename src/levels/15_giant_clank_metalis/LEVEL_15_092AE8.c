extern int D_00150E34;
extern int D_00150E50;

void func_092AE8(void)
{
    int *v;
    int value;

    if (D_00150E34 != 0) {
        D_00150E34--;
    }
    v = &D_00150E50;
    if (D_00150E34 == 0) {
        value = D_00150E50 - 8;
    } else {
        value = D_00150E50 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00150E50 > hi) {
            D_00150E50 = hi;
        }
    }
    if (D_00150E50 < 0) {
        D_00150E50 = 0;
    }
}
