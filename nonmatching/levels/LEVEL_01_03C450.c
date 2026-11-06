/* LEVEL_01.REL:0x03C450: 20 reviewed USA placements.
 * Ghidra body: 148 bytes; pinned C links 88 bytes and first differs at +2.
 * The 64-bit state copy uses a shorter instruction sequence. Reopen with the original flag storage and mask widths.
 * This source has no matching credit.
 */
void func_03C450(char *record)
{
    unsigned long long *flags = (unsigned long long *)(record + 0x960);
    flags[1] = (flags[1] & ~1ULL) | ((flags[0] >> 40) & 1ULL);
    flags[0] &= 0xffffee1fffffffffULL;
    record[0x9e8] = 0;
    *(int *)(record + 0x274) = 0;
}
