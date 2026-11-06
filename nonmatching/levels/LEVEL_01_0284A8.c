/* LEVEL_01.REL:0x0284A8: Ghidra body 72 bytes.
 * Pinned pure C links 76 bytes and first differs at +48.
 * Recheck bit-index arithmetic and call argument scheduling. No matching credit.
 */
extern unsigned int func_0274B0(unsigned int, unsigned int);

unsigned int func_0284A8(int first, int second)
{
    unsigned int bit = (second + ((first - 1U) & 1) * 4) - 1;
    unsigned int value = func_0274B0(((first - 1U) >> 1) + 0x84,
                                     bit & 0xff);
    return (value >> (bit & 0x1f)) & 1;
}
