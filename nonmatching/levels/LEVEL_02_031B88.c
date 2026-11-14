/* USA LEVEL_02.REL:0x031B88 (14 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { float x, y, z, w; } Vec4;
extern void func_01AC80(Vec4 *);
extern int func_0319E0(void *, void *, void *, unsigned char, float, float, int, Vec4 *);

int func_031B88(void *a, void *b, void *c, int d, float f, float g, int e)
{
    Vec4 v;
    unsigned char k = d;

    func_01AC80(&v);
    return func_0319E0(a, b, c, k, f, g, e, &v);
}
