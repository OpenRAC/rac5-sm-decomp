/* LEVEL_16.REL:0x0CA5B0: reviewed 84-byte candidate, held for ABI review.
 * Runs a guarded two-step check and calls a follow-up when both pass.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_10FC28 returning int with (int), but the accepted
 * FRONTEND_020780.c defines it returning int with no arguments.
 * It declares func_0AAE20 returning void with no arguments, but the accepted
 * LEVEL_16_0AAE20.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_024F50(int a0, int a1);
extern int func_10FC28(int a0);
extern int func_018BD8(int a0);
extern void func_0AAE20(void);

void func_0CA5B0(void)
{
    if (func_024F50(0x91, 1) == 0) {
        if (func_10FC28(0) == 3) {
            if (func_018BD8(6) != 0) {
                func_0AAE20();
            }
        }
    }
}
