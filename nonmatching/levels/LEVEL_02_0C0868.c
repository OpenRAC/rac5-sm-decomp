/* LEVEL_02.REL:0x0C0868: reviewed 112-byte candidate.
 * pinned C with gnu-ee-trial links 124 bytes; first differs at +16.
 * Retry: Recover the branch-based absolute-width flow instead of compiler if-
 * conversion, while retaining the eight-argument field stores and exact 112-byte
 * extent.
 * No matching credit.
 */
int func_0C0868(char *state, short left, short top, short right,
                short bottom, int mode, unsigned char flag, int span)
{
    int width;
    if (right < left)
        width = (int)left - (int)right;
    else
        width = (int)right - (int)left;
    *(int *)(state + 0x8c) = bottom;
    *(int *)(state + 0x88) = top;
    *(int *)(state + 0x98) = mode;
    *(unsigned char *)(state + 0x9c) = flag;
    *(int *)(state + 0x90) = left;
    *(int *)(state + 0x94) = right;
    if (width + 1 > (span << 1))
        span = width / 5;
    *(int *)(state + 0xa0) = span;
    return 1;
}
