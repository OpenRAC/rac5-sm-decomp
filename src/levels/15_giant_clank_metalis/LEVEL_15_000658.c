extern char D_0015FF90[];

char *func_000658(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_0015FF90 + index * 0x14;
}
