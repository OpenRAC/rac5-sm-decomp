extern int *D_001A815C;

int func_10FAF8(int v)
{
    int *p = D_001A815C;

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
