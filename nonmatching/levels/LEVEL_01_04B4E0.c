/* LEVEL_01.REL:0x04B4E0: 20 reviewed USA placements.
 * Ghidra body: 192 bytes; pinned C links 84 bytes and first differs at +2.
 * The two 64-bit mask updates compile to 84 bytes, not the 192-byte retail body. Reopen with the original bitfield layout and operation widths.
 * This source has no matching credit.
 */
void func_04B4E0(char *record)
{
    unsigned long long *flags = (unsigned long long *)(record + 0x960);
    flags[0] = (flags[0] & 0xffbcfffcffffffffULL) | 0x800000000000ULL;
    flags[1] = (flags[1] & 0xffffffffffffffafULL) | 8ULL;
}
