extern int D_0019DD7C;
extern int D_0019DD88;

void func_0A4C48(void)
{
    int *v;
    int value;

    if (D_0019DD7C != 0) {
        D_0019DD7C--;
    }
    v = &D_0019DD88;
    if (D_0019DD7C == 0) {
        value = D_0019DD88 - 8;
    } else {
        value = D_0019DD88 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0019DD88 > hi) {
            D_0019DD88 = hi;
        }
    }
    if (D_0019DD88 < 0) {
        D_0019DD88 = 0;
    }
}
