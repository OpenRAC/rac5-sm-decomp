extern int *D_0020E8DC;

int func_087F08(int param_1)
{
    int *p = D_0020E8DC;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
