/* LEVEL_04:0x1CEE98 -- placement copy of LEVEL_01_1BBFD8.c: starts the object's state 5-or-lower action: installs its handler and blend value, loads the shared effect id, sets up its parts, resolves the linked record and starts it (or runs the fallback callback when the link is missing). Returns 1, or 0 for higher states. */
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

extern int D_002201B4;
extern int D_002226D8;
extern char D_00242B78[];
extern int func_11A9B0(char *name);
extern int func_02F5D0(Rec *r, Obj *o);
extern void func_013200(char *sub, Obj *o, int a, int b);
extern void func_1422A8(void);
extern void func_1CE800(void);
extern void func_1CED18(Obj *o);

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_002201B4 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_1CEE98(Obj *o)
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
    *(void **)(o->vt + 0xDC) = (void *)func_1CE800;
    *(int *)(sub + 0x40) = 0;
    *(float *)(o->anim->tbl + 0x28 + o->b44 * 0x34) = 0.5f;
    if (D_002226D8 == 0) {
        D_002226D8 = func_11A9B0(D_00242B78);
    }
    o->b77 = 0x2D;
    func_02F5D0(rec, o);
    func_013200(sub, o, 0, 0x10);
    fn = func_1CED18;
    lp = &rec->link;
    if (FixChecked(lp) != 0) {
        peer = *(Peer **)lp;
        if (*(unsigned char *)(peer->p58 + 0x60) < 0xC) {
            ((void (*)(Peer *, Obj *, int))func_1422A8)(peer, o, (int)fn);
        }
    } else if (fn != 0) {
        fn(o);
    }
    return 1;
}
