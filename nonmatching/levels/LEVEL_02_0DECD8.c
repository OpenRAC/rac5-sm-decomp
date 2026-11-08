/* LEVEL_02.REL:0x0DECD8: reviewed 128-byte candidate.
 * pinned C with gnu-ee-trial links 128 bytes; first differs at +29.
 * Retry: Recover span-half and output-reload register lifetimes while preserving
 * signed division and 128-byte length; first difference +29.
 * No matching credit.
 */
typedef unsigned int u32;

void func_0DECD8(int period, u32 span, int value, int *first, int *second)
{
    int half = period / 2;
    int start;
    int width;
    int remaining;
    *first = value;
    *second = value;
    if ((span >> 1) < (u32)half)
        half = span >> 1;
    start = *first - half;
    *first = start >= 0 ? start : start + period;
    width = span < (u32)period ? span : period;
    width--;
    remaining = width - half;
    if (remaining != 0) {
        int end = *second + remaining;
        *second = end < period ? end : end - period;
    } else {
        *second = value;
    }
}
