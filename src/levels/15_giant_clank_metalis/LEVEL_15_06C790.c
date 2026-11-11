extern int *D_0014AEDC;

int func_06C790(int param_1)
{
    int *p = D_0014AEDC;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
