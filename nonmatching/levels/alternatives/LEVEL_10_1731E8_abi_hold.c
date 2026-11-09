/* LEVEL_10.REL:0x1731E8: reviewed 64-byte candidate, held for ABI review.
 * Calls a probe and returns a float result, or zero when the probe reports -1.
 * pinned C with gnu-ee-trial links 64/64 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_173020 returning long long with no arguments, but the
 * accepted LEVEL_10_173020.c defines it returning int with (pointer).
 * It declares func_07D0C0 returning float with (int), but the accepted
 * LEVEL_01_07CA90.c defines it returning float with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern long long func_173020(void);
extern float func_07D0C0(int);

float func_1731E8(int *record)
{
    if (func_173020() == -1) return 0;
    return func_07D0C0(*record);
}
