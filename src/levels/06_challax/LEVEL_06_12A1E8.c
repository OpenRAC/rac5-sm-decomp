extern int D_001F5C68;
extern int *D_001F5C64;
int func_12A1E8(int value)
{
    if (D_001F5C68 == 0)
        return 0;
    if (value != D_001F5C68)
        return 0;
    *D_001F5C64 = 0;
    return 1;
}