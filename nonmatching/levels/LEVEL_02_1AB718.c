/* USA LEVEL_02.REL:0x1AB718 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_027D10 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_0021BD54;
extern int D_0022F770;

typedef struct {
    int link;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    unsigned char flag;
    char pad47[0x54 - 0x47];
    Rec *rec;
} Obj;

extern void func_027D10(void);

int func_1AB718(Obj *o)
{
    Rec *r;
    int t;
    int mode;
    int state;

    r = o->rec;
    if (r->link != 0) {
        t = D_0021BD54 + r->link;
        if (*(int *)(t + 0x40) == 0) {
            r->link = 0;
        } else {
            r->link = t;
        }
    }
    state = o->state;
    mode = D_0022F770;
    if (mode == 0x16) {
        mode = 3;
    } else if (!(mode ^ 0x17)) {
        mode = 6;
    }
    if (((int (*)(int, int))func_027D10)(mode * 2 + 2, state) != 0) {
        o->flag = 2;
    }
    return 1;
}
