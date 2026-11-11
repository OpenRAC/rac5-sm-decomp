extern int *D_0021B34C;

int func_136810(int v)
{
    int *p = D_0021B34C;

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
