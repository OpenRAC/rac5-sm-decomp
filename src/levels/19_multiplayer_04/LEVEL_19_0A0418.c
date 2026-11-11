extern int D_001AB374;
extern int D_001AB390;

void func_0A0418(void)
{
    int *v;
    int value;

    if (D_001AB374 != 0) {
        D_001AB374--;
    }
    v = &D_001AB390;
    if (D_001AB374 == 0) {
        value = D_001AB390 - 8;
    } else {
        value = D_001AB390 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AB390 > hi) {
            D_001AB390 = hi;
        }
    }
    if (D_001AB390 < 0) {
        D_001AB390 = 0;
    }
}
