/* USA FRONTEND.REL:0x022790 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller FRONTEND_022878.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    int a[16];
    int b[16];
} Tab;

int func_022790(Tab *t, unsigned int index)
{
    if (index < 16) {
        t->a[index] = 0;
        t->b[index] = 0;
        return 1;
    }
    return 0;
}
