extern int D_001B96C8;
extern int D_001B96C4;

void func_11D610(void)
{
    int *v;
    int value;

    if (D_001B96C8 != 0) {
        D_001B96C8--;
    }
    v = &D_001B96C4;
    if (D_001B96C8 == 0) {
        value = D_001B96C4 - 8;
    } else {
        value = D_001B96C4 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001B96C4 > hi) {
            D_001B96C4 = hi;
        }
    }
    if (D_001B96C4 < 0) {
        D_001B96C4 = 0;
    }
}
