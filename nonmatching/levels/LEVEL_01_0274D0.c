/* LEVEL_01.REL:0x0274D0: Ghidra body 84 bytes.
 * Pinned pure C links 84 bytes and first differs at +2.
 * Recheck bit-mask register allocation and field widths. No matching credit.
 */
extern unsigned char *D_001F3FAC;

void func_0274D0(int index, unsigned char value, unsigned char bit)
{
    unsigned char mask = (unsigned char)(1u << bit);
    unsigned char *slot = D_001F3FAC + 0x8c0 + index;
    *slot &= (unsigned char)~mask;
    slot = D_001F3FAC + 0x8c0 + index;
    *slot |= (unsigned char)((value << bit) & mask);
}
