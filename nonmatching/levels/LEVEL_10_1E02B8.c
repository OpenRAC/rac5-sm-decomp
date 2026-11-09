/* LEVEL_10.REL:0x1E02B8: reviewed 100-byte candidate, held for ABI review.
 * Passes a float through two helpers and bumps a counter in the first argument
 * record.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_017798 returning int with (pointer, int), but the accepted
 * LEVEL_10_017798.c defines it returning int with no arguments.
 * It declares func_081308 returning void with (int), but the accepted
 * LEVEL_10_081308.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_017798(int *a0, int a1);
extern int func_1E0170(int a0, int a1, float f0, int a2);
extern void func_081308(int a0);

void func_1E02B8(int *a0, int a1, float f12)
{
    int *p;
    float f;
    int t;
    int r;

    f = f12;
    p = a0;
    t = func_017798(p, a1);
    r = func_1E0170(*p, t, f, a1);
    func_081308(r);
    *p = *p + 1;
}
