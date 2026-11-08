/* LEVEL_02.REL:0x041000: reviewed 52-byte candidate.
 * pinned C with gnu-ee-trial links 56 bytes; first differs at +9.
 * Retry: Recover the source or qualified constant expansion that constructs the
 * 64-bit clear mask in the retail six-instruction sequence.
 * No matching credit.
 */
void func_041000(char *record, unsigned long long bit)
{
    unsigned long long *word = (unsigned long long *)(record + 0x960);
    *word = (*word & ~(1ULL << 47)) | ((bit & 1ULL) << 47);
}
