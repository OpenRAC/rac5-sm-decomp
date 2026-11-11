extern int *D_001C6EDC;

int func_081350(int param_1)
{
    int *p = D_001C6EDC;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
