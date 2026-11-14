/* USA LEVEL_01.REL:0x148728 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_12C200 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { char pad00[0x5A8]; int w5A8; } Owner;
typedef struct { Owner *owner; char pad04[0x28]; int part; } Rec;
typedef struct { char pad00[0x58]; Rec *rec; } Obj;
extern void func_12C200(int *part);

void func_148728(Obj *o)
{
    Rec *r = o->rec;

    func_12C200(&r->part);
    r->owner->w5A8 = 0;
}
