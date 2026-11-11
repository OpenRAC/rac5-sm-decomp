extern int *D_0015B9AC;

int func_0F26D8(int v)
{
    int *p = D_0015B9AC;

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
