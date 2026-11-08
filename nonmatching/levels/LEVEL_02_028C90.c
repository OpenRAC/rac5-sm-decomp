/* LEVEL_02.REL:0x028C90: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 76 bytes; first differs at +48.
 * Retry: Prove shift < 32 for every caller and producer, or qualify a route that
 * emits retail from defined masked-shift C; the unmasked exact diagnostic stays
 * private.
 * No matching credit.
 */
/* LEVEL_02.REL:0x028C90: useful C candidate, no matching credit.
   Reopen when: Prove shift < 32 for every caller and producer, or qualify a route that emits retail from defined masked-shift C; the unmasked exact diagnostic stays private. */
extern unsigned int func_027C98(unsigned int unit, unsigned char bit);

unsigned int func_028C90(unsigned int position, unsigned int bit)
{
    unsigned int index = position - 1;
    unsigned int shift = bit + ((index & 1U) * 4U) - 1U;
    unsigned int value = func_027C98((index >> 1) + 0x84U, shift);
    return (value >> (shift & 31U)) & 1U;
}
