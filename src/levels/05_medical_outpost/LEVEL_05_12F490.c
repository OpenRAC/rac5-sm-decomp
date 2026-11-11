extern int D_001F60E8;
extern int *D_001F60E4;
int func_12F490(int value)
{
    if (D_001F60E8 == 0)
        return 0;
    if (value != D_001F60E8)
        return 0;
    *D_001F60E4 = 0;
    return 1;
}