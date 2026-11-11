int func_10F090(int *);

int func_10F060(int *p)
{
    if (func_10F090(p) == 0)
        return -1;
    return p[1];
}
