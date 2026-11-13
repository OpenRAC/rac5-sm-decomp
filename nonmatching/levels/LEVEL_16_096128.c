/* USA LEVEL_16.REL:0x096128, 160-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 160 linked bytes; first differing word +0x14.
 * Unaccepted; no matching credit. Establish ownership and validity of the coordinate-derived address space, then recover the input register lifetimes.
 */
/* Semantic hold: retail computes a byte address directly from coordinates;
 * validate the address space and storage owner before using this on a host. */
extern int func_095930(void);
void func_096128(unsigned short x, unsigned short y, unsigned int value, int mode)
{
    if (func_095930() && x<=512 && y<=512 && mode!=3) {
        unsigned int shift=(x&1)?0:4;
        unsigned char mask=15u<<shift;
        unsigned char *pixel=(unsigned char *)(unsigned long)(((unsigned int)y<<8)+(x>>1));
        *pixel=(*pixel & ~mask) | (value<<shift);
    }
}
