/* LEVEL_01.REL:0x028290: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +20.
 * Recheck the post-call state predicate and global pointer lifetime. No matching credit.
 */
extern int func_0282D8(void);
extern char *D_001F3FAC;

int func_028290(void)
{
    int active = 0;
    if (func_0282D8() == 0) {
        active = *(int *)(D_001F3FAC + 0x1c78) != 0;
    }
    return active;
}
