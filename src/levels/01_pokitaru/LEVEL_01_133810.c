extern int *D_0020704C;

int func_133810(int v)
{
    int *p = D_0020704C;

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
