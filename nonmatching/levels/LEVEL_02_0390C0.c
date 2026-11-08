/* LEVEL_02.REL:0x0390C0: reviewed 112-byte candidate.
 * pinned C with gnu-ee-trial links 112 bytes; first differs at +17.
 * Retry: Find a natural parser expression that materializes the two tag constants in
 * the retail order while preserving the 112-byte loop.
 * No matching credit.
 */
void func_0390C0(unsigned int *result, const unsigned int *stream)
{
    unsigned int tag;
    int count = 0;
    int offset = 0;
    int active = 0;
    for (;;) {
        tag = *stream++ & 0xFF000000U;
        if (tag == 0x01000000U) {
            offset += 0x10;
            if (!active) {
                count++;
                active = 1;
                offset += 0x10;
            }
        } else {
            active = 0;
            if (tag == 0xFE000000U)
                break;
        }
    }
    result[2] = offset;
    result[0] = count;
    result[1] = (count * 0x12 + 3U) & 0xFFFFFFFCU;
}
