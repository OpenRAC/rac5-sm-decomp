/* LEVEL_03.REL:0x1A1790: reviewed 204-byte candidate, held for ABI review.
 * Tests whether a value lies in a type-dependent range.
 * pinned C with gnu-ee-trial links 204/204 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07CC20 returning int with (int), but the accepted
 * LEVEL_01_07CE40.c defines it returning int with (pointer).
 * It declares func_07C888 returning float with (int), but the accepted
 * LEVEL_01_07CA90.c defines it returning float with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_07CC20(int a);
extern float func_07C888(int a);

int func_1A1790(int a)
{
    int t = func_07CC20(a);
    float f = func_07C888(a);
    if (t == 0x15) {
        if (f >= 0.5f && f <= 0.8333333f)
            return 1;
    } else {
        if (f >= 0.23333333f && f <= 0.56666667f)
            return 1;
    }
    return 0;
}
