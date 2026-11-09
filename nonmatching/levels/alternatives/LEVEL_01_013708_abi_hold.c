/* LEVEL_01.REL:0x013708: reviewed 96-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its
 * integer result as the fourth argument to a second helper.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 5
 * other USA placements, but the prototypes disagree.
 * It declares func_01A2D0 returning int with (int, int, int, int), but the
 * accepted LEVEL_01_01A2D0.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_01A2D0(int a0, int a1, int a2, int a3);
extern float func_013768(int a0, int a1, int a2, int a3, int a4);

float func_013708(int a0, int a1, int a2, int a3)
{
    int r;

    r = func_01A2D0(a0, a1, a2, a3);
    return func_013768(a0, a1, a2, r, a3);
}
