/* LEVEL_02.REL:0x027CB8: reviewed 84-byte candidate.
 * pinned C with gnu-ee-trial links 80 bytes; first differs at +2.
 * Retry: Find a qualified route/source that preserves the byte-indexed bit update
 * from defined C: the explicit low-five-bit mask is required for all input bytes and
 * current C links 80/84 bytes.
 * No matching credit.
 */
extern unsigned char *D_00208C2C;

void func_027CB8(int index, unsigned int value, unsigned int bit)
{
    unsigned int shift = (unsigned char)bit & 31U;
    unsigned int mask = 1U << shift;
    unsigned char *target = D_00208C2C + 0x8c0 + index;
    *target = *target & ~mask;
    target = D_00208C2C + 0x8c0 + index;
    *target = *target | (((unsigned char)value << shift) & mask);
}
