extern int *D_0023F11C;

int func_0901A8(int param_1)
{
    int *p = D_0023F11C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
