/* USA LEVEL_08.REL:0x18C860 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_014850 unlike its accepted definition; and declares func_188C70 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad00[0x58];
    char *p58;
} Peer;

typedef struct {
    char pad00[0x30];
    int w30;
    int link;
} Rec;

typedef struct {
    char pad00[0x30];
    char pos[0x10];
    char pad40[0x04];
    unsigned char b44;
    unsigned char b45;
    char pad46[0x0E];
    Rec *rec;
    char *sub;
    char pad5C[0x08];
    unsigned int flags;
    char pad68[0x10];
    unsigned int mode;
} Obj;

extern int D_0024FC54;
extern int func_030140(Rec *r, Obj *o);
extern int func_014850(char *pos, int a, int b, float f);
extern void func_013450(char *sub, Obj *o, int a, int b);
extern void func_188C70(Peer *p, Obj *o);
extern void func_18DCD0(Obj *o);
extern void func_18D860(Obj *o, int a, int b);

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_0024FC54 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_18C860(Obj *o)
{
    Rec *rec;
    char *sub;
    Peer *peer;
    int *lp;
    void (*fn)(Obj *);

    rec = o->rec;
    o->flags |= 0x1000;
    sub = o->sub;
    if (func_030140(rec, o) != 1) {
        return 0;
    }
    if (func_014850(o->pos, 0, 1, 1.0f) == 0) {
        return 0;
    }
    if (o->b45 == 2 && rec->w30 == 0) {
        return 0;
    }
    o->mode = (o->mode & 0xFFF0FFFF) | 0x20000;
    func_013450(sub, o, 1, 0x10);
    fn = func_18DCD0;
    lp = &rec->link;
    if (FixChecked(lp) != 0) {
        peer = *(Peer **)lp;
        if (*(unsigned char *)(peer->p58 + 0x60) < 0xC) {
            func_188C70(peer, o);
        }
    } else if (fn != 0) {
        fn(o);
    }
    func_18D860(o, 0xFF, o->b45);
    return 1;
}
