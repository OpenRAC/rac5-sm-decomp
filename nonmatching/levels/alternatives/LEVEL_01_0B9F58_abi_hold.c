/* LEVEL_01.REL:0x0B9F58: reviewed 112-byte candidate, held for ABI review.
 * Stores a record of signed short bounds and a value, and derives a size from
 * the width.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer, int, int, int, int,
 * int, int, int), but the accepted caller LEVEL_01_0B9FC8.c declares it
 * returning void with (int, int, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_0B9F58(char *record, short left, short top, short right,
                short bottom, int value, unsigned char mode, int size)
{
    int width;
    int d;

    *(int *)(record + 0x8c) = bottom;
    *(int *)(record + 0x88) = top;
    *(int *)(record + 0x98) = value;
    *(unsigned char *)(record + 0x9c) = mode;
    *(int *)(record + 0x90) = left;
    *(int *)(record + 0x94) = right;
    d = right - left;
    width = d;
    if ((unsigned int)d >> 31)
        width = -width;
    if ((size << 1) >= width + 1)
        size = width / 5;
    *(int *)(record + 0xa0) = size;
    return 1;
}
