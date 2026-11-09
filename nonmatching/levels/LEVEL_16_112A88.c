/* LEVEL_16.REL:0x112A88: reviewed 108-byte candidate, held for ABI review.
 * Masks three byte arguments, calls a helper, then tests one masked argument
 * selected by its result.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_112E00 returning int with (int, int, int), but the accepted
 * LEVEL_16_112E00.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_112E00(int a, int b, int c);

int func_112A88(int a0, int a1, int a2)
{
    unsigned int b0;
    unsigned int b1;
    unsigned int b2;
    int m;

    b0 = a0 & 0xFF;
    b1 = a1 & 0xFF;
    b2 = a2 & 0xFF;
    m = func_112E00(a0, a1, a2);
    if (m == 0) {
        return b0 == 0;
    }
    if (m == 1) {
        return b1 == 0;
    }
    if (m == 2) {
        return b2 == 0;
    }
    return 0;
}
