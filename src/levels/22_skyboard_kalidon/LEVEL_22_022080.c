extern unsigned char *D_0015332C;

unsigned char func_022080(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_0015332C + index + 0x1b60) >> 1) & 1u;
}
