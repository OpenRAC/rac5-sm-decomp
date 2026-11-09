/* LEVEL_16.REL:0x0220C8: reviewed 72-byte candidate, held for ABI review.
 * Bounds-checked address of one cell of a global 25-row table; the column
 * argument is biased by one.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It defines the function returning pointer with (int, int), but the accepted
 * caller LEVEL_16_021620.c declares it returning void with (int, int).
 * It defines the function returning pointer with (int, int), but the accepted
 * caller LEVEL_16_022890.c declares it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
