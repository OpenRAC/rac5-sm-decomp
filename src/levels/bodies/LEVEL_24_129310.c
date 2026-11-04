extern int *D_001D7CCC;

int func_129310(int v)
{
    int *p = D_001D7CCC;

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
