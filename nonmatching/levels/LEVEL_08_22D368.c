/* LEVEL_08.REL:0x22D368: reviewed 92-byte candidate, held for ABI review.
 * Builds a flag word from its argument, then calls two helpers on a local
 * record.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_09E868 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_08_09E868.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_09E868(void *a, unsigned int b, void *c, int d, int e, int f, int g);
extern void func_09EA40(void *a);
extern char D_0022DF08[];

void func_22D368(unsigned int a0)
{
    unsigned int local[4];
    unsigned int m;

    m = a0 & 0xFFFFFFC3;
    m |= 0x18;
    m &= 0xFFFFFFFC;
    m |= 1;
    func_09E868(local, m, D_0022DF08, 40, 0, -1, 0);
    func_09EA40(local);
}
