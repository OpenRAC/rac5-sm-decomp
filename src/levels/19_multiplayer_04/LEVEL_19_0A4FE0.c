extern int D_001AB8FC;
extern int D_001AB908;

void func_0A4FE0(void)
{
    int *v;
    int value;

    if (D_001AB8FC != 0) {
        D_001AB8FC--;
    }
    v = &D_001AB908;
    if (D_001AB8FC == 0) {
        value = D_001AB908 - 8;
    } else {
        value = D_001AB908 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001AB908 > hi) {
            D_001AB908 = hi;
        }
    }
    if (D_001AB908 < 0) {
        D_001AB908 = 0;
    }
}
