extern char D_001DE990[];

char *func_0008A8(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001DE990 + index * 0x14;
}
