extern int *D_001DA44C;

int func_124F88(int v)
{
    int *p = D_001DA44C;

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
