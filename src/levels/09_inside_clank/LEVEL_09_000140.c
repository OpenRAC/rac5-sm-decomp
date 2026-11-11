extern unsigned int D_001D8FA8[];

unsigned int func_000140(int row, int column)
{
    if (row >= 8)
        return 0xFFFFU;
    if (column >= 4)
        return 0xFFFFU;
    if (row >= 2)
        row = 1;
    return D_001D8FA8[row * 4 + column];
}
