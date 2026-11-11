extern int *D_0020B21C;

int func_08E9E0(int param_1)
{
    int *p = D_0020B21C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
