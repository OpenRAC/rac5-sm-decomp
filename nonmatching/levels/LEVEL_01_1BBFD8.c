/* USA LEVEL_01.REL:0x1BBFD8, 344-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x98.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x58];
    char *p58;
} Peer;

typedef struct {
    char pad00[0x3C];
    int link;
} Rec;

typedef struct {
    char pad00[0x40];
    int w40;
} Target;

typedef struct {
    char pad00[0x04];
    char *tbl;
} Anim;

typedef struct {
    char pad00[0x40];
    Anim *anim;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x02];
    char *vt;
    char pad4C[0x08];
    Rec *rec;
    char *sub;
    char pad5C[0x1B];
    unsigned char b77;
} Obj;

extern int D_00206D94;
extern int D_00208E80;
extern char D_002288B8[];
extern int func_10F448(char *name);
extern void func_02F930(Rec *r, Obj *o);
extern void func_0133E8(char *sub, Obj *o, int a, int b);
extern void func_16F930(Peer *p, Obj *o);
extern void func_1BB940(void);
extern void func_1BBE58(Obj *o);

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_00206D94 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_1BBFD8(Obj *o)
{
    Rec *rec;
    char *sub;
    Peer *peer;
    int *lp;
    void (*fn)(Obj *);

    rec = o->rec;
    sub = o->sub;
    if (o->b45 >= 5) {
        return 0;
    }
    *(void **)(o->vt + 0xDC) = (void *)func_1BB940;
    *(int *)(sub + 0x40) = 0;
    *(float *)(o->anim->tbl + 0x28 + o->b44 * 0x34) = 0.5f;
    if (D_00208E80 == 0) {
        D_00208E80 = func_10F448(D_002288B8);
    }
    o->b77 = 0x2D;
    func_02F930(rec, o);
    func_0133E8(sub, o, 0, 0x10);
    fn = func_1BBE58;
    lp = &rec->link;
    if (FixChecked(lp) != 0) {
        peer = *(Peer **)lp;
        if (*(unsigned char *)(peer->p58 + 0x60) < 0xC) {
            func_16F930(peer, o);
        }
    } else if (fn != 0) {
        fn(o);
    }
    return 1;
}
