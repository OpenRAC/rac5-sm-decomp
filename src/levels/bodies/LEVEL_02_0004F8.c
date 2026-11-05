extern unsigned char *D_00208C2C;

unsigned int func_0004F8(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_00208C2C[index + 0x859] >> bit) & 1u;
}
