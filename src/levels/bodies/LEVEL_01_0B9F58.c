/* LEVEL_01:0x0B9F58 -- stores a record of signed short bounds and a value, and derives a size from the width. */
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
