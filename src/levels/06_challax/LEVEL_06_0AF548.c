extern int D_001EB264;
extern int D_001EB268;

void func_0AF548(void)
{
    int *v;
    int value;

    if (D_001EB264 != 0) {
        D_001EB264--;
    }
    v = &D_001EB268;
    if (D_001EB264 == 0) {
        value = D_001EB268 - 8;
    } else {
        value = D_001EB268 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001EB268 > hi) {
            D_001EB268 = hi;
        }
    }
    if (D_001EB268 < 0) {
        D_001EB268 = 0;
    }
}
