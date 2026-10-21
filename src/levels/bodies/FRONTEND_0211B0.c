extern int *D_0032814;

int func_0211B0(int v)
{
    int *p = D_0032814;

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
