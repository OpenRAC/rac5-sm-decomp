/* USA LEVEL_16.REL:0x15D9F0, 80-byte candidate.
 * Measured pinned/gnu-ee-trial: 84 linked bytes; first differing word +0x14.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern void func_066830(unsigned char *);
void func_15D9F0(char *owner, unsigned char *slot)
{
    unsigned char *base = *(unsigned char **)(owner + 88);
    unsigned char *entry = base + 1540;
    unsigned char *active = base + 1636;
    unsigned int i;
    i = 0;
    while (entry != slot) {
        ++i;
        entry += 100;
        active += 100;
        if (i >= 4) return;
    }
    *active = 0;
    func_066830(slot);
}
