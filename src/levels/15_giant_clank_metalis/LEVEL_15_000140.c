extern unsigned int D_00143E28[];

unsigned int func_000140(int row, int column)
{
    if (row >= 8)
        return 0xFFFFU;
    if (column >= 4)
        return 0xFFFFU;
    if (row >= 2)
        row = 1;
    return D_00143E28[row * 4 + column];
}
