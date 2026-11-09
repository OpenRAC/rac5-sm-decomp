/* LEVEL_21.REL:0x134760: reviewed 80-byte candidate, held for ABI review.
 * Placement copy of LEVEL_15_134760.c.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 80/80 bytes and is byte-exact
 * at this USA placement, but the prototypes disagree.
 * It declares func_0617E0 returning float with (int, int), but the accepted
 * LEVEL_21_0617E0.c defines it returning float with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_002F4F88;
extern char D_00171AF0[];
extern float func_0617E0(int a, int b);

float f(int index)
{
    float d = *(float *)(D_00171AF0 + index * 12);

    return func_0617E0(D_002F4F88, index) / d;
}
