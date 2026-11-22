/* USA LEVEL_01.REL:0x16C660 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_025540 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    int w0;
    char pad04[0x08];
    int wC;
    unsigned char b10;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char f45;
    unsigned char f46;
    char pad47[0x0D];
    Rec *rec;
    int *p58;
} Obj;

extern int D_00206D94;
extern int D_0021A7F0;
extern unsigned char D_001F616C;
extern unsigned int func_027528(int index, unsigned int bit);
extern int func_025540(int value);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_00206D94 + *p;
    return 1;
}

int func_16C660(Obj *o)
{
    Rec *r;
    int sel;
    unsigned phase;
    int *dst;

    r = o->rec;
    if (Fix(&r->w0) == 0) {
        return 0;
    }
    o->f46 = 0;
    Fix(&r->wC);
    if (r->b10 != 0) {
        sel = D_0021A7F0;
        phase = o->f45;
        if (sel == 0x16) {
            sel = 3;
        } else if (sel == 0x17) {
            sel = 6;
        }
        if (func_027528(sel * 2 + 2, phase) != 0) {
            return -1;
        }
    }
    if (D_001F616C == 0) {
        return 1;
    }
    dst = o->p58;
    *dst = func_025540(o->f45);
    return 1;
}
