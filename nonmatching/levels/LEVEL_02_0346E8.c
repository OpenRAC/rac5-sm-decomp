/* LEVEL_02.REL:0x0346E8: reviewed 68-byte candidate, held for ABI review.
 * Runs the first pass on the pair, then hands its result to the second pass.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_034880 returning int with (pointer, pointer, int), but the
 * accepted LEVEL_02_034880.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_034880(void *a, void *b, int c);
extern void func_035480(void *a, void *b, int c);

void func_0346E8(void *a, void *b)
{
    func_035480(a, b, func_034880(a, b, 0));
}
