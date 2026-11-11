extern int *D_001A570C;

int func_079008(int param_1)
{
    int *p = D_001A570C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
