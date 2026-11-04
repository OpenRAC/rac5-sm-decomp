extern int *D_001E55DC;

int func_085A08(int param_1)
{
    int *p = D_001E55DC;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
