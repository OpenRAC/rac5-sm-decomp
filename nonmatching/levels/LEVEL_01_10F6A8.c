/* LEVEL_01.REL:0x10F6A8: Ghidra body 68 bytes.
 * Pinned pure C links 72 bytes and first differs at +4.
 * Recheck global capacity arithmetic and register schedule. No matching credit.
 */
extern unsigned int D_00331740;
extern unsigned int D_00331744;
extern unsigned int D_00331748;

int func_10F6A8(long long unused, int amount)
{
    unsigned int needed = amount - (D_00331740 - D_00331744);
    if (needed <= D_00331748) {
        D_00331748 -= needed;
        D_00331740 = D_00331744 + amount;
        return 1;
    }
    return 0;
}
