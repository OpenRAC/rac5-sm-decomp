/* USA LEVEL_16.REL:0x16BE40 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_13CAD8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad0[0x54];
    int *link;
} Obj;

extern void func_16BFF0(void *value);
extern void func_13CAD8(int handle, Obj *o);
extern void func_15D590(Obj *o);

void func_16BE40(Obj *o)
{
    func_16BFF0(o);
    if (*o->link != 0) {
        func_13CAD8(*o->link, o);
    }
    func_15D590(o);
}
