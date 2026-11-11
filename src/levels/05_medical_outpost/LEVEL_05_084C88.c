extern int *D_001E55DC[];

void func_084C88(int a, int b)
{
    D_001E55DC[0][0x7F] = b;
    D_001E55DC[0][0x7E] = a;
    D_001E55DC[0][0x40] &= a;
}
