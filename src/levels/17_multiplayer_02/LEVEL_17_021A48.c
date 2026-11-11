/* LEVEL_17:0x021A48 -- placement copy of LEVEL_16_0220C8.c: bounds-checked address of one cell of a global
   25-row table; the column argument is biased by one. */
typedef struct {
    char data[0x54];
} Cell;

extern Cell D_00192678[25][5];

Cell *func_021A48(unsigned int row, int column)
{
    column++;
    if (row < 25 && column >= 0 && column < 6)
        return &D_00192678[row][column];
    return 0;
}
