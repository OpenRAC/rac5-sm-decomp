extern unsigned char *D_001950B4;

unsigned char func_024B50(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001950B4 + index + 0x1b60) >> 1) & 1u;
}
