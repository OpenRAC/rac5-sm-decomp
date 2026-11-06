extern int D_001AB564;
extern int D_001AB568;

void func_0A3460(void)
{
    int *v;
    int value;

    if (D_001AB564 != 0) {
        D_001AB564--;
    }
    v = &D_001AB568;
    if (D_001AB564 == 0) {
        value = D_001AB568 - 8;
    } else {
        value = D_001AB568 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AB568 > hi) {
            D_001AB568 = hi;
        }
    }
    if (D_001AB568 < 0) {
        D_001AB568 = 0;
    }
}
