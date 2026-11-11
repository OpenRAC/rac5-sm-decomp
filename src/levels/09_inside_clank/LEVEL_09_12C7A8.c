extern int *D_001F0B4C;

int func_12C7A8(int v)
{
    int *p = D_001F0B4C;

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
