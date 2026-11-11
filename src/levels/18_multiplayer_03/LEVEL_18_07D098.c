extern unsigned int D_001A572C;
extern unsigned int D_001A5730;
extern unsigned int D_001A5734;
void func_07D098(int value)
{
    if (D_001A5730 > D_001A572C)
        D_001A572C = D_001A5730;
    if (value < 0)
        D_001A5730 = 0;
    else
        D_001A5730 = value;
    D_001A5734 = D_001A5734 == 0;
}