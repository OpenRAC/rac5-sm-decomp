extern unsigned int D_0014AEFC;
extern unsigned int D_0014AF00;
extern unsigned int D_0014AF04;
void func_0707E8(int value)
{
    if (D_0014AF00 > D_0014AEFC)
        D_0014AEFC = D_0014AF00;
    if (value < 0)
        D_0014AF00 = 0;
    else
        D_0014AF00 = value;
    D_0014AF04 = D_0014AF04 == 0;
}