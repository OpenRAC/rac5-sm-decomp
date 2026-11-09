/* LEVEL_16.REL:0x021FA8: reviewed 100-byte candidate.
 * Returns whether one table entry has tag 2 and a field of at least 3,
 * otherwise 0.
 * pinned C with gnu-ee-trial links 100/100 bytes; first differs at +52 (4
 * words).
 * The retail copies the table pointer in a branch delay slot that the compiler
 * leaves empty.
 * Retry: Recover the pointer temporary that the retail keeps live across the
 * branch.
 * No matching credit.
 */
extern char D_0019F078[];

int func_021FA8(unsigned int a0, int a1)
{
    char *p;

    if (a0 < 25) {
        a1 = a1 + 1;
        if (a1 >= 0) {
            if (a1 < 6) {
                p = D_0019F078 + (a1 * 84 + a0 * 420);
                if (*(int *)(p + 4) == 2) {
                    return *(unsigned int *)(p + 0x3C) >= 3;
                }
            }
        }
    }
    return 0;
}
