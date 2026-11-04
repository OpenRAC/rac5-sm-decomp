extern int *D_0020FCAC;

int func_131690(int v)
{
    int *p = D_0020FCAC;

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
