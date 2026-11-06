/* LEVEL_01.REL:0x000140: Ghidra body 80 bytes.
 * Pinned pure C links 80 bytes and first differs at +24.
 * Recheck the table-lookup branch layout and column width. No matching credit.
 */
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
