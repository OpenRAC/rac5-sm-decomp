extern unsigned int D_001555FC;
extern unsigned int D_00155600;
extern unsigned int D_00155604;
void func_07D550(int value)
{
    if (D_00155600 > D_001555FC)
        D_001555FC = D_00155600;
    if (value < 0)
        D_00155600 = 0;
    else
        D_00155600 = value;
    D_00155604 = D_00155604 == 0;
}