/* LEVEL_02.REL:0x0DFB00: reviewed 140-byte candidate.
 * pinned C with gnu-ee-trial links 136 bytes; first differs at +1.
 * Retry: Recover the original parameter widths and source flow that allocate the
 * count in a2 and position in a1.
 * No matching credit.
 */
void func_0DFB00(int count, int unused, int position, int *first, int *last)
{
    int value;
    *first = position;
    *last = position;
    if (count < 4) {
        *first = 0;
        *last = count - 1;
        return;
    }
    value = position - 2;
    *first = value;
    if (value < 0) {
        *first = count + value;
    } else if (value > count - 1) {
        *first = (position - 1) - count;
    }
    value = position + 2;
    *last = value;
    if (value < 0) {
        *last = count + value;
        return;
    }
    if (value > count - 1) {
        *last = (position + 3) - count;
    }
}
