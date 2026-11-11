extern int *D_001F625C;

int func_0880B0(int param_1)
{
    int *p = D_001F625C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
