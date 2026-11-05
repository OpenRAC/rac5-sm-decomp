extern unsigned char *D_001DDDAC;

unsigned char func_0266F8(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001DDDAC + index + 0x1b60) >> 1) & 1u;
}
