extern unsigned int D_001C6EFC;
extern unsigned int D_001C6F00;
extern unsigned int D_001C6F04;
void func_0853D8(int value)
{
    if (D_001C6F00 > D_001C6EFC)
        D_001C6EFC = D_001C6F00;
    if (value < 0)
        D_001C6F00 = 0;
    else
        D_001C6F00 = value;
    D_001C6F04 = D_001C6F04 == 0;
}