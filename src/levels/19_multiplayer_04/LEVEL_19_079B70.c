extern int *D_001A540C;

int func_079B70(int param_1)
{
    int *p = D_001A540C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
