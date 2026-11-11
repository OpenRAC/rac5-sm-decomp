/* LEVEL_18:0x021710 -- placement copy of LEVEL_16_0220C8.c: bounds-checked address of one cell of a global
   25-row table; the column argument is biased by one. */
typedef struct {
    char data[0x54];
} Cell;

extern Cell D_001A04F8[25][5];

Cell *func_021710(unsigned int row, int column)
{
    column++;
    if (row < 25 && column >= 0 && column < 6)
        return &D_001A04F8[row][column];
    return 0;
}
