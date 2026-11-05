extern unsigned char *D_001A2C34;

unsigned char func_024D78(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001A2C34 + index + 0x1b60) >> 1) & 1u;
}
