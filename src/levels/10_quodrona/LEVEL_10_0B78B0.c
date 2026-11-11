extern int D_002056FC;
extern int D_00205708;

void func_0B78B0(void)
{
    int *v;
    int value;

    if (D_002056FC != 0) {
        D_002056FC--;
    }
    v = &D_00205708;
    if (D_002056FC == 0) {
        value = D_00205708 - 8;
    } else {
        value = D_00205708 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00205708 > hi) {
            D_00205708 = hi;
        }
    }
    if (D_00205708 < 0) {
        D_00205708 = 0;
    }
}
