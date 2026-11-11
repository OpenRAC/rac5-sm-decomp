extern int D_001B5FF8;
extern int *D_001B5FF4;
int func_10F538(int value)
{
    if (D_001B5FF8 == 0)
        return 0;
    if (value != D_001B5FF8)
        return 0;
    *D_001B5FF4 = 0;
    return 1;
}