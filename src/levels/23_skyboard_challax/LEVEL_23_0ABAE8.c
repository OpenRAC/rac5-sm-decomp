extern int D_001CF764;
extern int D_001CF768;

void func_0ABAE8(void)
{
    int *v;
    int value;

    if (D_001CF764 != 0) {
        D_001CF764--;
    }
    v = &D_001CF768;
    if (D_001CF764 == 0) {
        value = D_001CF768 - 8;
    } else {
        value = D_001CF768 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_001CF768 > hi) {
            D_001CF768 = hi;
        }
    }
    if (D_001CF768 < 0) {
        D_001CF768 = 0;
    }
}
