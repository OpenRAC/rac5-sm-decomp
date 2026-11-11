extern int D_001AB674;
extern int D_001AB690;

void func_09FB98(void)
{
    int *v;
    int value;

    if (D_001AB674 != 0) {
        D_001AB674--;
    }
    v = &D_001AB690;
    if (D_001AB674 == 0) {
        value = D_001AB690 - 8;
    } else {
        value = D_001AB690 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AB690 > hi) {
            D_001AB690 = hi;
        }
    }
    if (D_001AB690 < 0) {
        D_001AB690 = 0;
    }
}
