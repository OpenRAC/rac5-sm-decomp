extern char D_001C18E8[];

char *func_0005D8(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001C18E8 + index * 0xc;
}
