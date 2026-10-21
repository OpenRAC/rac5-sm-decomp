/* FRONTEND:0x004BA8 -- updates the mask word of the global object. */
extern int *D_0002AD1C[];

void func_004BA8(int a, int b)
{
    D_0002AD1C[0][0x7F] = b;
    D_0002AD1C[0][0x7E] = a;
    D_0002AD1C[0][0x40] &= a;
}
