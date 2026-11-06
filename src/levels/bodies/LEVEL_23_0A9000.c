extern int D_001CF5B4;
extern int D_001CF5D0;

void func_0A9000(void)
{
    int *v;
    int value;

    if (D_001CF5B4 != 0) {
        D_001CF5B4--;
    }
    v = &D_001CF5D0;
    if (D_001CF5B4 == 0) {
        value = D_001CF5D0 - 8;
    } else {
        value = D_001CF5D0 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001CF5D0 > hi) {
            D_001CF5D0 = hi;
        }
    }
    if (D_001CF5D0 < 0) {
        D_001CF5D0 = 0;
    }
}
