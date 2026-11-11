extern int D_001CCE34;
extern int D_001CCE50;

void func_0ABA98(void)
{
    int *v;
    int value;

    if (D_001CCE34 != 0) {
        D_001CCE34--;
    }
    v = &D_001CCE50;
    if (D_001CCE34 == 0) {
        value = D_001CCE50 - 8;
    } else {
        value = D_001CCE50 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001CCE50 > hi) {
            D_001CCE50 = hi;
        }
    }
    if (D_001CCE50 < 0) {
        D_001CCE50 = 0;
    }
}
