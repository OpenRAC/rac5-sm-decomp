extern char D_001DC590[];

char *func_0006B0(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_001DC590 + index * 0x14;
}
