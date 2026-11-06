/* LEVEL_16.REL:0x024FE8: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +2.
 * Recheck byte index width, halfword mask and pointer register schedule. No matching credit.
 */
extern char *D_001A1AB4;

void func_024FE8(int offset, unsigned int value, unsigned int index)
{
    unsigned short *slot = (unsigned short *)(D_001A1AB4 + offset + 0x8c0);
    unsigned short bit = (unsigned short)(1U << (index & 31));
    *slot = (*slot & ~bit) |
            (unsigned short)(((value & 0xffffU) << (index & 31)) & bit);
}
