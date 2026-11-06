extern int D_00215674;
extern int D_00215690;

void func_0B76C0(void)
{
    int *v;
    int value;

    if (D_00215674 != 0) {
        D_00215674--;
    }
    v = &D_00215690;
    if (D_00215674 == 0) {
        value = D_00215690 - 8;
    } else {
        value = D_00215690 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_00215690 > hi) {
            D_00215690 = hi;
        }
    }
    if (D_00215690 < 0) {
        D_00215690 = 0;
    }
}
