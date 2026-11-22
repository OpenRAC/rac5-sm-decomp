/* USA LEVEL_04.REL:0x171B98 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0251C0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Rec {
    int f0;
    int f4;
    int slot_08;
    int handle_0C;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec_54;
} Obj;

extern char *D_002201B4;
extern int D_00234170;
extern void func_0F6C80(int a);
extern int func_0271B8(int a, int b);
extern int func_0251C0(int a);

int func_171B98(Obj *o)
{
    Rec *r;
    char *target;
    int ok;
    int k;
    int t;

    func_0F6C80(0);
    r = o->rec_54;
    if (r->f0 == 0) {
        ok = 0;
    } else {
        target = D_002201B4 + r->f0;
        if (*(int *)(target + 0x40) == 0) {
            r->f0 = 0;
            ok = 0;
        } else {
            r->f0 = (int)target;
            ok = 1;
        }
    }
    if (!ok)
        return 0;
    if (r->f4 != 0) {
        target = D_002201B4 + r->f4;
        if (*(int *)(target + 0x40) == 0)
            r->f4 = 0;
        else
            r->f4 = (int)target;
    }
    if (r->slot_08 >= 0) {
        k = D_00234170;
        if (k == 0x16)
            k = 3;
        else if (k == 0x17)
            k = 6;
        if (func_0271B8(k * 2 + 2, r->slot_08 & 0xFF) == 0)
            r->handle_0C = func_0251C0(r->slot_08);
    }
    return 1;
}
