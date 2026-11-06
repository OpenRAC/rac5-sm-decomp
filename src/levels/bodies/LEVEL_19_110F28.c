extern int D_001B5CF8;
extern int *D_001B5CF4;
int func_110F28(int value)
{
    if (D_001B5CF8 == 0)
        return 0;
    if (value != D_001B5CF8)
        return 0;
    *D_001B5CF4 = 0;
    return 1;
}