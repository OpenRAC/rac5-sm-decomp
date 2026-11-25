/* LEVEL_19:0x148250 -- state machine of an attached effect (0 idle, 1 running, 2 waiting for 60 frames, 3 finishing): runs the per-state helpers, and while running re-registers the proxy with the near or far pool entry; mirrors the state into the node. */
typedef struct Obj Obj;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    void *w4;
} Sub;

typedef struct {
    char pad0[0x1C];
    Sub sub;
    char pad24[0x34 - 0x24];
    unsigned char b34;
} State;

typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
    char pad18[0x34 - 0x18];
} Rec;

typedef struct {
    char pad0[4];
    Rec *recs;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Type;

typedef struct {
    char pad[0x68];
} Entry;

struct Obj {
    char pad0[0x40];
    Type *type;
    unsigned char idx;
    unsigned char state;
    char pad46[0x58 - 0x46];
    State *st;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    float timer;
};

extern Entry D_001DE578[];

extern int func_148F50(Obj *o);
extern void func_148790(Obj *o);
extern void func_149050(Obj *o);
extern void func_148528(Obj *o);
extern int func_0749E8(float *a, float *b, void *c);
extern void func_0868F0(Entry *e, unsigned int h);
extern void func_086308(Entry *e, Sub *s, float *a, float *b, unsigned int flags);
extern void func_1489F8(Obj *o);

static __inline__ int isFar(float *a, float *b)
{
    float dx = b[0] - a[0];
    float dz = b[2] - a[2];

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

static __inline__ void Release(Entry *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_0868F0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_148250(Obj *o, float step)
{
    float p0[4];
    float p1[4];
    State *st;
    Sub *s;
    Rec *rec;
    unsigned int base;
    unsigned int fl;
    unsigned int f;
    unsigned int alt;
    int far;

    st = o->st;
    if (o->state == 0) {
        if (func_148F50(o) != 0) {
            o->state = 1;
        }
        func_148790(o);
    } else if (o->state == 1) {
        if (func_148F50(o) == 0) {
            o->state = 0;
            return;
        }
        func_149050(o);
        s = &st->sub;
        func_148528(o);
        func_148790(o);
        rec = &o->type->recs[o->idx];
        base = o->flags & 0x1420;
        alt = base | 1;
        f = base | 0x81;
        if (rec->w0C == 0) {
            f = alt;
        }
        if (rec->w10 != 0) {
            f |= 0x100;
        }
        if (rec->w14 != 0) {
            f |= 0x200;
        }
        if (o->type->b3F == 1) {
            f |= 0x800;
        }
        if ((o->flags >> 3) & 1) {
            f |= 0x400;
        }
        fl = f | 0x1010;
        if (func_0749E8(p0, p1, s->w4) != 0) {
            far = isFar(p0, p1);
            Release(&D_001DE578[s->b3], &s->h0);
            s->b3 = far;
            func_086308(&D_001DE578[far], s, p0, p1, fl);
        } else {
            Release(&D_001DE578[s->b3], &st->sub.h0);
        }
    } else if (o->state == 2) {
        if (60.0f < o->timer) {
            o->state = 3;
        }
    } else if (o->state == 3) {
        func_1489F8(o);
    }
    st->b34 = o->state;
}
