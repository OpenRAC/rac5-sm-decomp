/* FRONTEND.REL:0x021000: reviewed 132-byte candidate, held for ABI review.
 * One-time init gate; sets a state value once a status bit is seen.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It declares func_003E10 returning void with no arguments, but the accepted
 * FRONTEND_003E10.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_00032814;
extern int func_0205B8(int a);
extern int func_020AE8(void);
extern void func_003E10(void);

int func_021000(void)
{
    unsigned int s0;

    if (D_00032814 == 0) {
        return 0;
    }
    if (func_0205B8(1) != 0) {
        return 0;
    }
    s0 = func_020AE8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_003E10();
    *(int *)(D_00032814 + 4) = 0xC;
    *(int *)(D_00032814 + 0xC) = s0;
    return 1;
}
