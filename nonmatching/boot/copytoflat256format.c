/* copytoflat256format 0x01EB27E0 (14 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
void copytoflat256format(short *dst, int *src)
{
    short *dst2 = dst + 256;
    int i = 255;
    int v;

    do {
        v = src[0];
        *dst++ = (v > 0x03FFF7FF) ? 0x7FFF : (v > -0x03FFF800) ? (v >> 11) : -0x7FFF;
        v = src[1];
        *dst2++ = (v > 0x03FFF7FF) ? 0x7FFF : (v > -0x03FFF800) ? (v >> 11) : -0x7FFF;
        src += 2;
    } while (--i >= 0);
}
