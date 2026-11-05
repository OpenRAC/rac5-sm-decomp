extern unsigned char *D_001C4C2C;

unsigned char func_025020(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001C4C2C + index + 0x1b60) >> 1) & 1u;
}
