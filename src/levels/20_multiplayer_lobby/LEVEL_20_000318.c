extern unsigned char *D_00104194;

unsigned int func_000318(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_00104194[index + 0x859] >> bit) & 1u;
}
