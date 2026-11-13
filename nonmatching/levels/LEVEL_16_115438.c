/* USA LEVEL_16.REL:0x115438, 96-byte candidate.
 * Measured pinned/gnu-ee-trial: 96 linked bytes; first differing word +0x20.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern unsigned char D_001B8350, D_001B8373, D_001B8371, D_001B8376, D_001B8351;
extern void func_115BB0(int);
void func_115438(int enabled, int first, int helper_arg, int second)
{
    if (enabled && !D_001B8350) {
        D_001B8371 = first;
        D_001B8373 = second;
        D_001B8350 = 1;
        func_115BB0(helper_arg);
        D_001B8351 = 0;
        D_001B8376 = 1;
    }
}
