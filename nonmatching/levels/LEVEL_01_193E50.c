/* USA LEVEL_01.REL:0x193E50 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1943B8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad00[0x4E];
    unsigned char b4E;
} Rec;

typedef struct {
    char pad00[0x44];
    unsigned char b44;
    unsigned char state;
    char pad46[0x12];
    Rec *rec;
} Obj;

extern void func_1943B8(Obj *o, int state, int a2);

void func_193E50(Obj *o)
{
    o->b44 = o->rec->b4E;
    func_1943B8(o, o->state, 0);
}
