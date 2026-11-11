extern int *D_001B4B5C;

int func_110580(int v)
{
    int *p = D_001B4B5C;

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
