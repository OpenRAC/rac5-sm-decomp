extern char D_001B3C10[];

char *func_0005B0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001B3C10 + index * 0x14;
}
