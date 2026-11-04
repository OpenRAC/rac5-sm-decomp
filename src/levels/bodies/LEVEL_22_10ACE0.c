extern int *D_0016602C;

int func_10ACE0(int v)
{
    int *p = D_0016602C;

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
