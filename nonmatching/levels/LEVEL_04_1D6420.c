/* LEVEL_04.REL:0x1D6420: reviewed 84-byte candidate, held for ABI review.
 * Placement copy of LEVEL_08_1FB3A0.c.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_003258 returning pointer with no arguments, but the
 * accepted LEVEL_04_003258.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_08:1FB3A0 -- scales the block's three fields by thirty and hands the
   vector to the level's routine. */
extern char *func_003258(void);
extern void func_012290(float *a0);
void func_1D6420(void)
{
    float *p = (float *)(func_003258() + 0x20);
    float v[3];

    v[0] = p[0] * 30.0f;
    v[1] = p[1] * 30.0f;
    v[2] = p[2] * 30.0f;
    func_012290(v);
}
