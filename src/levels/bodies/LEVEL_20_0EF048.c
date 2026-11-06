extern int D_0011ABF0;
extern int D_0011ABEC;

void func_0EF048(void)
{
    int *v;
    int value;

    if (D_0011ABF0 != 0) {
        D_0011ABF0--;
    }
    v = &D_0011ABEC;
    if (D_0011ABF0 == 0) {
        value = D_0011ABEC - 8;
    } else {
        value = D_0011ABEC + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_0011ABEC > hi) {
            D_0011ABEC = hi;
        }
    }
    if (D_0011ABEC < 0) {
        D_0011ABEC = 0;
    }
}
