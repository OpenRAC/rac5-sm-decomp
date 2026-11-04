extern int *D_001F5C4C;

int func_129EE0(int v)
{
    int *p = D_001F5C4C;

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
