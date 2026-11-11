extern int D_00215824;
extern int D_00215828;

void func_0BA3F8(void)
{
    int *v;
    int value;

    if (D_00215824 != 0) {
        D_00215824--;
    }
    v = &D_00215828;
    if (D_00215824 == 0) {
        value = D_00215828 - 8;
    } else {
        value = D_00215828 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00215828 > hi) {
            D_00215828 = hi;
        }
    }
    if (D_00215828 < 0) {
        D_00215828 = 0;
    }
}
