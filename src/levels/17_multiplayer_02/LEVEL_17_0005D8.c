extern char D_001B3B68[];

char *func_0005D8(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001B3B68 + index * 0xc;
}
