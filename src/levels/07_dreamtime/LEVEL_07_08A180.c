extern int *D_0020A55C;

int func_08A180(int param_1)
{
    int *p = D_0020A55C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
