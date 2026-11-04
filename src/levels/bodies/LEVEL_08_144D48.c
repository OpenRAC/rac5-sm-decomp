extern int *D_0024FF0C;

int func_144D48(int v)
{
    int *p = D_0024FF0C;

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
