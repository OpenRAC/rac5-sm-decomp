extern unsigned char *D_0023CB2C;

unsigned char func_027D18(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_0023CB2C + index + 0x1b60) >> 1) & 1u;
}
