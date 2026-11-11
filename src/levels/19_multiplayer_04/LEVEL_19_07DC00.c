extern unsigned int D_001A542C;
extern unsigned int D_001A5430;
extern unsigned int D_001A5434;
void func_07DC00(int value)
{
    if (D_001A5430 > D_001A542C)
        D_001A542C = D_001A5430;
    if (value < 0)
        D_001A5430 = 0;
    else
        D_001A5430 = value;
    D_001A5434 = D_001A5434 == 0;
}