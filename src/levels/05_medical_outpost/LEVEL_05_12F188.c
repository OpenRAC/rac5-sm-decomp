extern int *D_001F60CC;

int func_12F188(int v)
{
    int *p = D_001F60CC;

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
