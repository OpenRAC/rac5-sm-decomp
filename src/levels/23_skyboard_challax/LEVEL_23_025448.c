extern unsigned char *D_001C73AC;

unsigned char func_025448(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001C73AC + index + 0x1b60) >> 1) & 1u;
}
