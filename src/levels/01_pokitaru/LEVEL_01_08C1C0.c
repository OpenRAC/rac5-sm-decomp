extern unsigned int D_001F627C;
extern unsigned int D_001F6280;
extern unsigned int D_001F6284;
void func_08C1C0(int value)
{
    if (D_001F6280 > D_001F627C)
        D_001F627C = D_001F6280;
    if (value < 0)
        D_001F6280 = 0;
    else
        D_001F6280 = value;
    D_001F6284 = D_001F6284 == 0;
}