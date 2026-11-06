extern unsigned int D_001A42AC;
extern unsigned int D_001A42B0;
extern unsigned int D_001A42B4;
void func_07D750(int value)
{
    if (D_001A42B0 > D_001A42AC)
        D_001A42AC = D_001A42B0;
    if (value < 0)
        D_001A42B0 = 0;
    else
        D_001A42B0 = value;
    D_001A42B4 = D_001A42B4 == 0;
}