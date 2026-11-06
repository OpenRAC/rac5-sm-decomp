/* FRONTEND.REL:0x025CC0: 21 USA placements.
 * Ghidra body: 68 bytes; pinned C links 68 bytes and first differs at +2.
 * The reviewed Ghidra body is 68 bytes; the 72-byte candidate interval contains a nonzero following word. C differs at byte 2 and the following word needs separate ownership review.
 * This source has no matching credit.
 */
int func_025CC0(int *record)
{
    int stride = record[0];
    int count = 0;
    if (stride == 0)
        return count;
    while (record[0] != 0) {
        if (record[1] != 0 && record[2] != 0)
            count++;
        record = (int *)((char *)record + stride) + 1;
    }
    return count;
}
