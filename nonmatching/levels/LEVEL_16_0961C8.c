/* USA LEVEL_16.REL:0x0961C8, 124-byte candidate.
 * Measured pinned/gnu-ee-trial: 140 linked bytes; first differing word +0x10.
 * Semantic/ABI proof remains incomplete; a local byte comparison earns no credit.
 */
extern int func_095930(void);
/* Pinned GNU EE: 140/124 bytes, first differing word +0x10.
   Reopen after establishing a real memory base and its caller contract.
   Semantic hold: the original memory base has not been established. This
   explicit buffer parameter records the bounded indexing hypothesis only;
   it is not a compatible replacement for the observed two-argument ABI. */
int func_0961C8(unsigned short x, unsigned short y, const unsigned char *bitmap)
{
    unsigned short row;
    unsigned int bit;
    unsigned char mask;
    if (!func_095930() || x > 512 || y > 512) return 0;
    row = y << 6;
    bit = (~x) & 7;
    mask = 1u << bit;
    return (bitmap[row + (x >> 3)] & mask) >> bit;
}
