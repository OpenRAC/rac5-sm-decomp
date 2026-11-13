/* USA LEVEL_16.REL:0x0383B8, 100-byte candidate.
 * Measured pinned/gnu-ee-trial: 96 linked bytes; first differing word +0x34.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern unsigned int func_1157B0(void);
extern int func_114718(char *);
int func_0383B8(char *self, char *other)
{
    int result = 0;
    char *nested = **(char ***)(other + 88);
    if (*(int *)(nested + 252) != *(int *)(self + 252) || func_1157B0()) {
        if (func_114718(self) == 0) result = 1;
    }
    return result;
}
