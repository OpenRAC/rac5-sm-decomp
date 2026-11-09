/* LEVEL_01.REL:0x02A3A8: reviewed 68-byte candidate, held for ABI review.
 * Calls a predicate and forwards a 64-bit value to one of two handlers.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_02A3F0 returning int with no arguments, but the accepted
 * LEVEL_01_02A3F0.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_02A3F0(void);
extern void func_02A2D8(long long);
extern void func_02A340(long long);

void func_02A3A8(long long value)
{
    if (func_02A3F0() != 0) {
        func_02A340(value);
    } else {
        func_02A2D8(value);
    }
}
