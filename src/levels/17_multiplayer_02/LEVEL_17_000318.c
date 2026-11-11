extern unsigned char *D_001950B4;

unsigned int func_000318(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_001950B4[index + 0x859] >> bit) & 1u;
}
