extern int *D_0021F6CC;

int func_131BD8(int v)
{
    int *p = D_0021F6CC;

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
