extern int *D_001C965C[];

void func_07D1F0(int a, int b)
{
    D_001C965C[0][0x7F] = b;
    D_001C965C[0][0x7E] = a;
    D_001C965C[0][0x40] &= a;
}
