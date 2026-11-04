extern int *D_001FF25C[];

void func_087698(int a, int b)
{
    D_001FF25C[0][0x7F] = b;
    D_001FF25C[0][0x7E] = a;
    D_001FF25C[0][0x40] &= a;
}
