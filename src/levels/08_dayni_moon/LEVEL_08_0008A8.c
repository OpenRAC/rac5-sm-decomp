extern char D_00255490[];

char *func_0008A8(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_00255490 + index * 0x14;
}
