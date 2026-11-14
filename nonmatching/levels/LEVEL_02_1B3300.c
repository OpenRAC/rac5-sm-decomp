/* USA LEVEL_02.REL:0x1B3300 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_030128 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Rec { char pad00[0x2C]; int f2C; int f30; int f34; int pad38; int f3C; int f40; } Rec;
typedef struct Obj { char pad00[0x54]; Rec *f54; } Obj;
extern int D_0021BD54;
extern void func_030128(void);
void func_1B3300(Obj *o)
{
    Rec *r = o->f54;
    int t;
    if (r->f2C != 0) r->f2C = D_0021BD54 + r->f2C;
    if (r->f30 != 0) { t = D_0021BD54 + r->f30; if (*(int *)(t + 0x40) == 0) r->f30 = 0; else r->f30 = t; }
    if (r->f34 != 0) r->f34 = D_0021BD54 + r->f34;
    if (r->f3C != 0) { t = D_0021BD54 + r->f3C; if (*(int *)(t + 0x40) == 0) r->f3C = 0; else r->f3C = t; }
    if (r->f40 != 0) r->f40 = D_0021BD54 + r->f40;
    func_030128();
}
