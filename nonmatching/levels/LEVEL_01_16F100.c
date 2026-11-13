/* USA LEVEL_01.REL:0x16F100, 96-byte candidate.
 * Measured pinned/gnu-ee-trial: 96 linked bytes; first differing word +0x4.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
void func_16F100(char *owner)
{
    char *entry = *(char **)(owner + 88);
    unsigned int i;
    owner[69] = 2;
    *(int *)(owner + 112) = 0;
    for (i = 0; i < 12; ++i, entry += 28) {
        if (*(char **)entry) {
            *(int *)(*(char **)entry + 100) = (*(int *)(*(char **)entry + 100) & ~32) | 32U;
            *(int *)(*(char **)entry + 100) &= ~64;
        }
    }
}
