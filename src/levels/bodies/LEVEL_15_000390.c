extern unsigned char *D_00148C2C;

unsigned int func_000390(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_00148C2C[index + 0x859] >> bit) & 1u;
}
