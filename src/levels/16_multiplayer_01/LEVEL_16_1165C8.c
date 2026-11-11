extern int D_002DFA80[];

void *func_1165C8(void *a0)
{
    unsigned n = 0;
    int *v = D_002DFA80;
    int *cur = v + 8;

    while (n < 4) {
        if ((void *)cur[0] == a0) {
            return v;
        }
        v = (int *)((char *)v + 0x28);
        cur = (int *)((char *)cur + 0x28);
        n++;
    }
    return 0;
}

int func_0E8F08(float *a0, float *a1)
{
    if (*a0 < *a1) {
        return 1;
    }
    if (*a1 < *a0) {
        return -1;
    }
    return 0;
}
