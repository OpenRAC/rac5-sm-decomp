extern int *D_001B5CDC;

int func_110C20(int v)
{
    int *p = D_001B5CDC;

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
