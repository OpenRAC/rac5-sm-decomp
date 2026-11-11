extern unsigned int D_0023F13C;
extern unsigned int D_0023F140;
extern unsigned int D_0023F144;
void func_0942B8(int value)
{
    if (D_0023F140 > D_0023F13C)
        D_0023F13C = D_0023F140;
    if (value < 0)
        D_0023F140 = 0;
    else
        D_0023F140 = value;
    D_0023F144 = D_0023F144 == 0;
}