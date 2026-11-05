extern unsigned char *D_0023CB2C;

unsigned int func_0004F8(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_0023CB2C[index + 0x859] >> bit) & 1u;
}
