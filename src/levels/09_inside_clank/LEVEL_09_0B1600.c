extern signed char D_0030F3E0[];

int func_0B1600(int index)
{
    signed char *row = D_0030F3E0 + index * 0x10;
    return row[0xc] != -1;
}
