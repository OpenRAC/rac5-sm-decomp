extern int *D_001A540C[];

void func_078D30(int a, int b)
{
    D_001A540C[0][0x7F] = b;
    D_001A540C[0][0x7E] = a;
    D_001A540C[0][0x40] &= a;
}
