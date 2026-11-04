extern int *D_0019788C;

int func_07A100(int param_1)
{
    int *p = D_0019788C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
