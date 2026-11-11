extern unsigned int D_001C967C;
extern unsigned int D_001C9680;
extern unsigned int D_001C9684;
void func_081FF8(int value)
{
    if (D_001C9680 > D_001C967C)
        D_001C967C = D_001C9680;
    if (value < 0)
        D_001C9680 = 0;
    else
        D_001C9680 = value;
    D_001C9684 = D_001C9684 == 0;
}