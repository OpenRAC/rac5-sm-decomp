extern int *D_001E005C;

int func_084A68(int param_1)
{
    int *p = D_001E005C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
