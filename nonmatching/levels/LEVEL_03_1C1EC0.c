/* USA LEVEL_03.REL:0x1C1EC0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1342F0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad0[4];
    int link;
} Owner;

typedef struct {
    char pad0[0x7C];
    int handle;
} Part;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Owner *owner;
    Part *part;
} Obj;

extern int D_003B344C;
extern void func_1C4BC8(Obj *o);
extern void func_1C4918(Obj *o);
extern void func_1C4978(Obj *o);
extern int func_1342F0(int link, Obj *o, int c);
extern void func_1C5518(Obj *o, int mode);
extern void func_1C2DA0(Obj *o);

void func_1C1EC0(Obj *o)
{
    Owner *own = o->owner;
    Part *part = o->part;

    func_1C4BC8(o);
    switch (o->state) {
    case 2:
        func_1C4978(o);
        break;
    case 0:
        if (part->handle < 0)
            part->handle = func_1342F0(own->link, o, 0);
        func_1C5518(o, D_003B344C);
        break;
    case 1:
        func_1C4918(o);
        break;
    }
    func_1C2DA0(o);
}
