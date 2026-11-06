extern int D_001E6164;
extern int D_001E6168;

void func_0B1FB8(void)
{
    int *v;
    int value;

    if (D_001E6164 != 0) {
        D_001E6164--;
    }
    v = &D_001E6168;
    if (D_001E6164 == 0) {
        value = D_001E6168 - 8;
    } else {
        value = D_001E6168 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001E6168 > hi) {
            D_001E6168 = hi;
        }
    }
    if (D_001E6168 < 0) {
        D_001E6168 = 0;
    }
}
