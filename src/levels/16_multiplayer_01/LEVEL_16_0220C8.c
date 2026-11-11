/* LEVEL_16:0x0220C8 -- bounds-checked address of one cell of a global
   25-row table; the column argument is biased by one. */
typedef struct {
    char data[0x54];
} Cell;

extern Cell D_0019F078[25][5];

Cell *func_0220C8(unsigned int row, int column)
{
    column++;
    if (row < 25 && column >= 0 && column < 6)
        return &D_0019F078[row][column];
    return 0;
}
