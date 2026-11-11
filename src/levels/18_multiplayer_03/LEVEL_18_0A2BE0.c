extern int D_001AB864;
extern int D_001AB868;

void func_0A2BE0(void)
{
    int *v;
    int value;

    if (D_001AB864 != 0) {
        D_001AB864--;
    }
    v = &D_001AB868;
    if (D_001AB864 == 0) {
        value = D_001AB868 - 8;
    } else {
        value = D_001AB868 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AB868 > hi) {
            D_001AB868 = hi;
        }
    }
    if (D_001AB868 < 0) {
        D_001AB868 = 0;
    }
}
