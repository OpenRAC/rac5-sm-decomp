extern unsigned char *D_001A1AB4;

unsigned char func_0251D0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001A1AB4 + index + 0x1b60) >> 1) & 1u;
}
