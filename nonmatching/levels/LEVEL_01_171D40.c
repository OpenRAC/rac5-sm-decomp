/* USA LEVEL_01.REL:0x171D40 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0EBA78 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void *memset(void *p, int c, unsigned int n);

typedef struct {
    int w00;
    int w04;
} Link;

typedef struct {
    char pad00[0xA8];
    int fA8;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Link *link;
    Rec *rec;
} Obj;

extern int D_00206D94;
extern int D_00395E60[1];
extern int func_0EBA78(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0);

int func_171D40(Obj *o)
{
    Rec *rec = o->rec;
    Link *link = o->link;
    int ok;
    int a;
    int b;

    memset(rec, 0, 0x54);
    memset((char *)rec + 0x54, 0, 0x54);
    if (o->state == 3) {
        return 0;
    }
    a = link->w00;
    if (a == 0) {
        ok = 0;
    } else {
        link->w00 = D_00206D94 + a;
        ok = 1;
    }
    if (!ok) {
        return 0;
    }
    b = link->w04;
    if (b != 0) {
        link->w04 = D_00206D94 + b;
    }
    D_00395E60[0] = func_0EBA78(0xC, 0, 0, 0, 3);
    o->rec->fA8 = 0;
    return 1;
}
