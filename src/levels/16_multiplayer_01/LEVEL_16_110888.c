extern int D_001B4B78;
extern int *D_001B4B74;
int func_110888(int value)
{
    if (D_001B4B78 == 0)
        return 0;
    if (value != D_001B4B78)
        return 0;
    *D_001B4B74 = 0;
    return 1;
}