extern unsigned int D_001E007C;
extern unsigned int D_001E0080;
extern unsigned int D_001E0084;
void func_088AF0(int value)
{
    if (D_001E0080 > D_001E007C)
        D_001E007C = D_001E0080;
    if (value < 0)
        D_001E0080 = 0;
    else
        D_001E0080 = value;
    D_001E0084 = D_001E0084 == 0;
}