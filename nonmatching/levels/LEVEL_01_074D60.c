/* LEVEL_01.REL:0x074D60: Ghidra body 80 bytes.
 * Pinned pure C links 72 bytes and first differs at +18.
 * Recheck the table end pointer and loop register lifetimes. No matching credit.
 */
extern int D_00239E20[];
extern int D_001F60B4;

int *func_074D60(int value)
{
    int *item = D_00239E20;
    int *end = D_00239E20 + D_001F60B4 * 9;
    if (item != end) {
        do {
            if (*item == value) {
                return item;
            }
            item += 9;
        } while (item != end);
    }
    return 0;
}
