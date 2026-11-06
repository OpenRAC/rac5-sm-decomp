/* LEVEL_01.REL:0x0D8348: Ghidra body 128 bytes.
 * Pinned pure C links 136 bytes and first differs at +1.
 * Recheck signed half-size division and endpoint register lifetimes. No matching credit.
 */
void func_0D8348(unsigned int first_size, unsigned int second_size,
                 int center, int *first, int *last)
{
    unsigned int half;
    int left;
    int right;

    *first = center;
    *last = center;
    half = (int)first_size / 2;
    if ((second_size >> 1) < half) {
        half = second_size >> 1;
    }
    left = *first - half;
    if (first_size <= second_size) {
        second_size = first_size;
    }
    if (left < 0) {
        *first = left + first_size;
    } else {
        *first = left;
    }
    right = (second_size - 1) - half;
    if (right != 0) {
        right = *last + right;
        if (right < (int)first_size) {
            *last = right;
        } else {
            *last = right - first_size;
        }
    } else {
        *last = center;
    }
}
