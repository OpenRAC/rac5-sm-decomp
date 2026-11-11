extern int D_001F0B68;
extern int *D_001F0B64;
int func_12CAB0(int value)
{
    if (D_001F0B68 == 0)
        return 0;
    if (value != D_001F0B68)
        return 0;
    *D_001F0B64 = 0;
    return 1;
}