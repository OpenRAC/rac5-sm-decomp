extern unsigned int D_0020A57C;
extern unsigned int D_0020A580;
extern unsigned int D_0020A584;
void func_08E220(int value)
{
    if (D_0020A580 > D_0020A57C)
        D_0020A57C = D_0020A580;
    if (value < 0)
        D_0020A580 = 0;
    else
        D_0020A580 = value;
    D_0020A584 = D_0020A584 == 0;
}