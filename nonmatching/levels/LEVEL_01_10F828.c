/* USA LEVEL_01.REL:0x10F828 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_110C88.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad0[8];
    int pos;
    int ref;
    int total;
} Rec;

extern Rec D_00331738;

void func_10F828(int value)
{
    Rec *r = &D_00331738;

    if (value == r->ref) {
        int delta = r->pos - value;

        r->pos = value;
        r->total += delta;
    }
}
