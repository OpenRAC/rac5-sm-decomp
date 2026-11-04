extern int *D_001C965C;

int func_07DF70(int param_1)
{
    int *p = D_001C965C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
