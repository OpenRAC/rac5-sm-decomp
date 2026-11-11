extern int *D_0010696C;

int func_0672F8(int param_1)
{
    int *p = D_0010696C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
