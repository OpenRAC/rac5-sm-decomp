extern unsigned char *D_001F3FAC;

unsigned char func_0276F0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001F3FAC + index + 0x1b60) >> 1) & 1u;
}
