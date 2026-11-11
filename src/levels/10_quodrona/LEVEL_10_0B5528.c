extern signed char D_00331060[];

int func_0B5528(int index)
{
    signed char *row = D_00331060 + index * 0x10;
    return row[0xc] != -1;
}
