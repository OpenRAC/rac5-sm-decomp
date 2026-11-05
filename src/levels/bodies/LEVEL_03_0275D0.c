extern unsigned char *D_0020C62C;

unsigned char func_0275D0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_0020C62C + index + 0x1b60) >> 1) & 1u;
}
