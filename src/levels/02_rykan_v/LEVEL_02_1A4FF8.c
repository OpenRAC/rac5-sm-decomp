/* LEVEL_02:0x1A4FF8 -- activates a collision object: relocates its three resource pointers, checks the resource, rebuilds the flag word from the type record and registers the bounds in the small or large pool. */
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;

typedef struct { char pad00[0x40]; int w40; } Res;

typedef struct {
    Res *p[3];
    unsigned char b0C;
} Hdr;

struct Obj;

typedef struct {
    unsigned short h00;
    unsigned char b02;
    unsigned char b03;
    struct Obj *w04;
} State;

typedef struct Obj {
    char pad00[0x40];
    Type *type;
    char pad44a[0x44 - 0x44];
    unsigned char b44;
    char pad45[0x54 - 0x45];
    Hdr *hdr;
    State *state;
    char pad5C[0x64 - 0x5C];
    int flags;
    char pad68[0x76 - 0x68];
    unsigned char b76;
    unsigned char b77;
} Obj;

typedef struct { char pad[0x68]; } Rec68;

extern int D_0021BD54;
extern Rec68 D_00246BF8[];

extern int func_088610(float *a, float *b, Obj *o);
extern void func_09B940(Rec68 *r, State *s, float *a, float *b, unsigned int bits);
extern int func_1A56E8(void *p);

static __inline__ int RelocLoaded(int *p)
{
    int v;
    Res *t;

    v = p[0];
    if (v == 0) {
        return 0;
    }
    t = (Res *)(D_0021BD54 + v);
    if (t->w40 == 0) {
        p[0] = 0;
        return 0;
    }
    p[0] = (int)t;
    return 1;
}

int func_1A4FF8(Obj *o)
{
    float a[4];
    float b[4];
    Hdr *h;
    State *s;
    unsigned int bits;
    unsigned int keep;
    unsigned int i;
    Rec34 *rec;
    int big;
    int ok;
    float dx;
    float dz;

    h = o->hdr;
    s = o->state;
    for (i = 0; i < 3; i++) {
        if (!RelocLoaded((int *)&h->p[i])) {
            return 0;
        }
    }
    if (h->b0C != 0) {
        ok = func_1A56E8(o);
    } else {
        ok = func_1A56E8(h->p[0]);
    }
    if (ok == 0) {
        return -1;
    }
    s->b02 = 2;
    s->h00 = 0xFFFF;
    s->w04 = o;
    keep = o->flags & 0x1420;
    rec = o->type->recs + o->b44;
    bits = keep | 1;
    if (rec->w0C != 0)
        bits = keep | 0x81;
    if (rec->w10 != 0)
        bits |= 0x100;
    if (rec->w14 != 0)
        bits |= 0x200;
    if (o->type->b3F == 1)
        bits |= 0x800;
    if (((unsigned int)o->flags >> 3) & 1)
        bits |= 0x400;
    if (func_088610(a, b, o) != 0) {
        dx = b[0] - a[0];
        dz = b[2] - a[2];
        if (8.0f < dx || 8.0f < dz)
            big = 1;
        else
            big = 0;
        s->b03 = big;
        func_09B940(&D_00246BF8[big], s, a, b, bits);
    }
    o->b77 = 0x40;
    o->b76 = 0x28;
    return 1;
}
