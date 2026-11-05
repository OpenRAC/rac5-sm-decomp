extern signed char D_00327C60[];

int func_0B4350(int index)
{
    signed char *row = D_00327C60 + index * 0x10;
    return row[0xc] != -1;
}
