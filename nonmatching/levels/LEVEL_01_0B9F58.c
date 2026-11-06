/* LEVEL_01.REL:0x0B9F58: Ghidra body 112 bytes.
 * Pinned pure C with `-mno-check-zero-division` links 116 bytes and first differs at +17.
 * Recheck division flag, field stores and argument lifetime. No matching credit.
 */
int func_0B9F58(char *record, short left, short top, short right,
                short bottom, int value, unsigned char mode, int size)
{
    int width = (int)right - (int)left;
    if (width < 0) {
        width = -width;
    }
    *(int *)(record + 0x8c) = bottom;
    *(int *)(record + 0x88) = top;
    *(int *)(record + 0x98) = value;
    *(unsigned char *)(record + 0x9c) = mode;
    *(int *)(record + 0x90) = left;
    *(int *)(record + 0x94) = right;
    if (width + 1 <= size << 1) {
        size = width / 5;
    }
    *(int *)(record + 0xa0) = size;
    return 1;
}
