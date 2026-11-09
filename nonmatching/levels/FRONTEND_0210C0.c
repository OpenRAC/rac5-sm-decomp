/* FRONTEND.REL:0x0210C0: reviewed 132-byte candidate, held for ABI review.
 * Checks a slot record's two sentinel fields and reports whether the second is
 * not below the first.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 5 other USA placements, but the prototypes disagree.
 * It declares func_0207D0 returning int with (int), but the accepted
 * FRONTEND_0207D0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_00032814;
extern int func_020890(int a);
extern int func_0207D0(int a);

int func_0210C0(void)
{
    if (D_00032814 == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_00032814 + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_00032814 + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_020890(1) == 0) {
        return 0;
    }
    if (func_0207D0(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_00032814 + 0xA4) >= *(unsigned int *)(D_00032814 + 0xA8);
}
