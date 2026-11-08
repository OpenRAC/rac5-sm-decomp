/* LEVEL_01.REL:0x087EE8: reviewed 100-byte candidate.
 * pinned C with gnu-ee-trial links 100 bytes; first differs at +16.
 * Retry: Find a source shape that branches through the second zero-float setup
 * instead of bypassing it; all qualified cc1 profiles preserve the offset difference.
 * No matching credit.
 */
unsigned int func_087EE8(float x, float y)
{
    unsigned int result = 0;
    if (x != 0.0f) {
        result = 0x20;
        if (!(x > 0.0f))
            result = 0x80;
    }
    if (y != 0.0f) {
        if (y > 0.0f)
            return result | 0x40;
        result |= 0x10;
    }
    return result;
}
