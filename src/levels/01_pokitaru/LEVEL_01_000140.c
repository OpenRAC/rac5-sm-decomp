/* LEVEL_01:0x000140 -- retained attempt body. */
extern int D_001EF1A8[];

int func_000140(int row, int column)
{
    if (row > 7) {
        return 0xffff;
    }
    if (column < 4) {
        if (row > 1) {
            row = 1;
        }
        return D_001EF1A8[row * 4 + column];
    }
    return 0xffff;
}
