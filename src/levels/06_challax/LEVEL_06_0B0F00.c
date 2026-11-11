extern int D_001EB5FC;
extern int D_001EB608;

void func_0B0F00(void)
{
    int *v;
    int value;

    if (D_001EB5FC != 0) {
        D_001EB5FC--;
    }
    v = &D_001EB608;
    if (D_001EB5FC == 0) {
        value = D_001EB608 - 8;
    } else {
        value = D_001EB608 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001EB608 > hi) {
            D_001EB608 = hi;
        }
    }
    if (D_001EB608 < 0) {
        D_001EB608 = 0;
    }
}
