extern int D_00211174;
extern int D_00211190;

void func_0B8B30(void)
{
    int *v;
    int value;

    if (D_00211174 != 0) {
        D_00211174--;
    }
    v = &D_00211190;
    if (D_00211174 == 0) {
        value = D_00211190 - 8;
    } else {
        value = D_00211190 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00211190 > hi) {
            D_00211190 = hi;
        }
    }
    if (D_00211190 < 0) {
        D_00211190 = 0;
    }
}
