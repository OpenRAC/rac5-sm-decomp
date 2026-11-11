extern unsigned int D_0020F73C;
extern unsigned int D_0020F740;
extern unsigned int D_0020F744;
void func_08F490(int value)
{
    if (D_0020F740 > D_0020F73C)
        D_0020F73C = D_0020F740;
    if (value < 0)
        D_0020F740 = 0;
    else
        D_0020F740 = value;
    D_0020F744 = D_0020F744 == 0;
}