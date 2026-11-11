extern int *D_0020F71C;

int func_08B348(int param_1)
{
    int *p = D_0020F71C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
