extern int D_001A8178;
extern int *D_001A8174;
int func_10FE00(int value)
{
    if (D_001A8178 == 0)
        return 0;
    if (value != D_001A8178)
        return 0;
    *D_001A8174 = 0;
    return 1;
}