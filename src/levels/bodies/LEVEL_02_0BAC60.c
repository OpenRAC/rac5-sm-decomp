extern signed char D_0033F160[];

int func_0BAC60(int index)
{
    signed char *row = D_0033F160 + index * 0x10;
    return row[0xc] != -1;
}
