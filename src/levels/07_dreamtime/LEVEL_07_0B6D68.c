extern int D_00210664;
extern int D_00210668;

void func_0B6D68(void)
{
    int *v;
    int value;

    if (D_00210664 != 0) {
        D_00210664--;
    }
    v = &D_00210668;
    if (D_00210664 == 0) {
        value = D_00210668 - 8;
    } else {
        value = D_00210668 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00210668 > hi) {
            D_00210668 = hi;
        }
    }
    if (D_00210668 < 0) {
        D_00210668 = 0;
    }
}
