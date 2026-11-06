/* LEVEL_01.REL:0x0370A0: Ghidra body 132 bytes.
 * Pinned pure C links 124 bytes and first differs at +0.
 * Recheck the partition's initial branch and pivot search control flow. No matching credit.
 */
unsigned short *func_0370A0(unsigned short *first, unsigned short *last,
                            unsigned short pivot)
{
    unsigned short value;
    for (;;) {
        last--;
        if (pivot <= *first) {
            goto check_last;
        }
        do {
            first++;
        } while (*first < pivot);
        value = *last;
        while (pivot < value) {
            last--;
check_last:
            value = *last;
        }
        if (last <= first) {
            break;
        }
        value = *first;
        *first = *last;
        *last = value;
        first++;
    }
    return first;
}
