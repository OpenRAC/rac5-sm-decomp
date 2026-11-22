/* USA LEVEL_03.REL:0x177A98, 384-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 21 differing words; first difference at 0x130.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Ent {
    char pad_00[0x20];
    Vec4 v;
    char pad_30[0x18];
    float scale;
    char pad_4C[0x80];
} Ent;

typedef struct Own {
    char pad_00[0x20];
    Vec4 v;
    Vec3 dir;
    char pad_3C[8];
    unsigned char type;
} Own;

typedef struct Rec {
    char pad_00[0x24];
    Vec3 dir;
    float len;
    Own *owner;
    char pad_38[8];
    float inv;
} Rec;

extern Ent *D_003B0D40;

static __inline__ float Len(Vec4 *v)
{
    return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
}

extern Rec *func_09F9A0(int *n, Ent *e, int k);
extern void func_1271B8(Rec *r, int a, Own *o, float x, float y, float z);
extern void func_120068(float *p);

Rec *func_177A98(Own *o)
{
    int n;
    Ent *e;
    Rec *r;
    float la;
    float lb;
    float s;
    Vec4 *ev;

    e = D_003B0D40 + o->type;
    r = func_09F9A0(&n, e, 1);
    if (n == 0) {
        return 0;
    }
    ev = &e->v;
    s = e->scale;
    la = Len(&o->v);
    lb = Len(ev);
    func_1271B8(r, 0, o, s, s, s);
    r->dir = o->dir;
    r->len = la * (ev->w + lb);
    r->owner = o;
    r->inv = 1.0f / s;
    func_120068((float *)((char *)r + 0x38));
    return r;
}
