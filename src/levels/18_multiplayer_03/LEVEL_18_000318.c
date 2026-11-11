extern unsigned char *D_001A2F34;

unsigned int func_000318(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_001A2F34[index + 0x859] >> bit) & 1u;
}
