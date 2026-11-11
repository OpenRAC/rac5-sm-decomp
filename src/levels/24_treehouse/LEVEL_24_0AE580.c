extern int D_001CCFE4;
extern int D_001CCFE8;

void func_0AE580(void)
{
    int *v;
    int value;

    if (D_001CCFE4 != 0) {
        D_001CCFE4--;
    }
    v = &D_001CCFE8;
    if (D_001CCFE4 == 0) {
        value = D_001CCFE8 - 8;
    } else {
        value = D_001CCFE8 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001CCFE8 > hi) {
            D_001CCFE8 = hi;
        }
    }
    if (D_001CCFE8 < 0) {
        D_001CCFE8 = 0;
    }
}
