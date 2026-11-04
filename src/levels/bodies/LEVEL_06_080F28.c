extern int *D_001E515C;

int func_080F28(int param_1)
{
    int *p = D_001E515C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
