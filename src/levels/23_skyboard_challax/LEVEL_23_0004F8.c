extern unsigned char *D_001C73AC;

unsigned int func_0004F8(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_001C73AC[index + 0x859] >> bit) & 1u;
}
