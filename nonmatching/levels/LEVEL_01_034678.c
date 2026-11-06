/* LEVEL_01.REL:0x034678: Ghidra body 112 bytes.
 * Pinned pure C links 144 bytes and first differs at +5.
 * Recheck nested stream loop and record counter lifetime. No matching credit.
 */
void func_034678(int *result, const unsigned int *stream)
{
    unsigned int word;
    int length = 0;
    int count = 0;
    int active = 0;
    int previous;

    do {
        for (;;) {
            previous = length;
            word = *stream++;
            if ((word & 0xff000000U) != 0x01000000U) {
                break;
            }
            length = previous + 16;
            if (!active) {
                count++;
                active = 1;
                length = previous + 32;
            }
        }
        active = 0;
        length = previous;
    } while ((word & 0xff000000U) != 0xfe000000U);
    result[2] = previous;
    result[0] = count;
    result[1] = (count * 18 + 3) & ~3;
}
