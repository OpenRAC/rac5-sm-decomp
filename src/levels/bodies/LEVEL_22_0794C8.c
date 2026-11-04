extern int *D_001555DC;

int func_0794C8(int param_1)
{
    int *p = D_001555DC;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
