/* USA LEVEL_16.REL:0x0255B0, 100-byte candidate.
 * Measured pinned/gnu-ee-trial: 100 linked bytes; first differing word +0x4.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern char *D_001A1AB4;
extern int D_001A1AC0[];
int func_0255B0(int target, int use_global)
{
    char *owner = D_001A1AB4;
    unsigned int i;
    if (!owner) return -1;
    for (i = 0; i < 8; ++i) {
        int *table = use_global ? D_001A1AC0 : (int *)(owner + 2148);
        if (table[i] == target) return i;
    }
    return -1;
}
