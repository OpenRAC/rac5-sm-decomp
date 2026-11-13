/* USA LEVEL_01.REL:0x025498, 88-byte candidate.
 * Measured pinned/gnu-ee-trial: 84 linked bytes; first differing word +0x18.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern unsigned char D_001F3ED0, D_001F3ED1, D_001F3EE4;
extern char D_0022FD00[];
extern void func_026BF0(void);
extern int func_029A70(int);
void func_025498(void)
{
    D_001F3ED0 = 0;
    if (D_001F3ED1) {
        func_026BF0();
        D_001F3ED1 = 0;
        if (D_001F3EE4) func_029A70(*(int *)(D_0022FD00 + 16));
    }
}
