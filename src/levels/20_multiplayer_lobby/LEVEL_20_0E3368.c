extern int *D_0011721C;

int func_0E3368(int v)
{
    int *p = D_0011721C;

    if (!p)
        return 0;
    if (v < 5) {
        if (v <= -1)
            v = -1;
        p[55] = v;
        return 1;
    }
    return 0;
}
