/* LEVEL_02:0x1E1010 -- placement copy of LEVEL_01_1CBEF0.c: probes the ground below an object's predicted position: marks its collision entry busy during the probe, and when it lands within 0.01 releases the object's hold (flag, link counter, entry handle) and reports 0; otherwise reports the height above the surface (or 0 when it is 30 or more away). */
typedef struct {
    char pad0[8];
    unsigned short h8;
    char padA[0x10 - 0xA];
} Part;

typedef struct {
    char pad0[0x64];
    Part *parts;
} Pool;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
} Rec;

typedef struct {
    char pad0[0x40];
    unsigned short cnt;
} Link;

typedef struct Obj2 {
    char pad0[0x10];
    float vel[3];
    char pad1C[0x30 - 0x1C];
    float pos[3];
    char pad3C[4];
    Link *link;
    char pad44[0x58 - 0x44];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    int flags;
} Mover;

extern Pool D_00246BF8[];

extern int func_1E0DF0(float *t, float *at);
extern int func_020ED0(float t, float *t2, float *v, float *at, int a, int b);
extern void func_09BF28(Pool *pool, unsigned int h);

static __inline__ void MulAdd3(float *d, float *p, float *v, float k)
{
    d[0] = p[0] + v[0] * k;
    d[1] = p[1] + v[1] * k;
    d[2] = p[2] + v[2] * k;
}

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09BF28(pool, *h);
        *h = 0xFFFF;
    }
}

int func_1E1010(float *out, Mover *o)
{
    Rec *rec;
    float at[3];
    float v[8];
    float t;
    float t2;
    int r;
    Part *p;

    rec = o->rec;
    MulAdd3(at, o->pos, o->vel, 0.5f);
    t = 30.0f;
    if (rec->h0 != 0xFFFF) {
        p = D_00246BF8[rec->b3].parts + rec->h0;
        p->h8 |= 8;
    }
    r = func_1E0DF0(&t, at);
    if (rec->h0 != 0xFFFF) {
        p = D_00246BF8[rec->b3].parts + rec->h0;
        p->h8 &= 0xFFF7;
    }
    if (r != 0 && t < 0.01f) {
        if (o->flags & 1) {
            if (o->link != 0) {
                o->link->cnt--;
            }
        }
        o->flags &= ~1;
        Release(&D_00246BF8[rec->b3], &rec->h0);
        out[0] = 0.0f;
        return 0;
    }
    if (func_020ED0(t, &t2, v, at, 0x4868, 0x4000) != 0) {
        r = 0;
        t = t2;
    }
    if (t < 30.0f) {
        out[0] = at[1] - o->pos[1] - t;
        return r;
    }
    out[0] = 0.0f;
    return 0;
}
