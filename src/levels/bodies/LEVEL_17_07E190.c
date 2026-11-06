extern unsigned int D_001978AC;
extern unsigned int D_001978B0;
extern unsigned int D_001978B4;
void func_07E190(int value)
{
    if (D_001978B0 > D_001978AC)
        D_001978AC = D_001978B0;
    if (value < 0)
        D_001978B0 = 0;
    else
        D_001978B0 = value;
    D_001978B4 = D_001978B4 == 0;
}