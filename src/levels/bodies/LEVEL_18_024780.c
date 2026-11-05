extern unsigned char *D_001A2F34;

unsigned char func_024780(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001A2F34 + index + 0x1b60) >> 1) & 1u;
}
