extern int *D_001A428C;

int func_079688(int param_1)
{
    int *p = D_001A428C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
