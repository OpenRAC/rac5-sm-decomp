/* FRONTEND.REL:0x014EB0: reviewed 100-byte candidate, held for ABI review.
 * Returns one of two table addresses after a setup call, or null for a bad
 * mode.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_0003028B;
extern char D_0012D770[];
extern void func_015040(void);

char *func_014EB0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_015040();
    D_0003028B = 1;
    base = D_0012D770;
    if (mode != 0)
        base += 0x20800;
    return base;
}
