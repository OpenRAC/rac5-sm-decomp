extern int *D_001FF25C;

int func_088418(int param_1)
{
    int *p = D_001FF25C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
