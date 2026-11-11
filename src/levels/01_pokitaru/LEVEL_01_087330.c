extern int *D_001F625C[];

void func_087330(int a, int b)
{
    D_001F625C[0][0x7F] = b;
    D_001F625C[0][0x7E] = a;
    D_001F625C[0][0x40] &= a;
}
