extern unsigned char *D_00208C2C;

unsigned char func_027ED8(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_00208C2C + index + 0x1b60) >> 1) & 1u;
}
