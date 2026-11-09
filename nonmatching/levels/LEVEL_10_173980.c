/* LEVEL_10.REL:0x173980: reviewed 624-byte candidate, held for ABI review.
 * Finds a target near a transformed position and updates the count.
 * gnu-ee-trial C with gnu-ee-trial links 624/624 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_0699B0 returning int with (int), but the accepted
 * LEVEL_01_06AB80.c defines it returning int with (pointer).
 * It declares func_039B48 returning pointer with (int), but the accepted
 * LEVEL_01_03B410.c defines it returning pointer with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    Vec4 r[4];
} Mat;

typedef struct {
    Mat m;
    char pad40[0x58 - 0x40];
    char *table;
} Src;

typedef struct {
    Src *src;
    int owner;
    char pad8[0x44 - 8];
    int type;
    char pad48[0xF0 - 0x48];
    int count;
} Obj;

typedef struct {
    char pad[0x20];
    float p[3];
} Ent;

typedef struct {
    char pad[0x30];
    float x;
    float y;
    float z;
} Tgt;

extern char D_0022A628[];
extern char D_0022A648[];
extern int D_0021060C;
extern float sqrtf(float);
extern float atan2f(float, float);
extern float fabsf(float);
extern void func_123FF0(float *, char *, char *);
extern int func_0699B0(int);
extern Ent *func_039B48(int);
extern unsigned char func_19D410(int);
extern Tgt *func_04B308(float, int, float *, Ent *, float *, int, char *);
extern int func_177470(int, float *, Tgt *);

int func_173980(Obj *o, int idx)
{
    Mat m;
    Src *s;
    char *tb;
    char *dd;
    float v[3];
    int owner;
    int a;
    Ent *e;
    Tgt *t;
    int r;
    unsigned char ok;
    float h;
    float *pp;
    float dx;
    float dz;
    float d2;
    float ang;

    s = o->src;
    tb = s->table + (idx * 64 + 0x144);
    dd = D_0022A628 + idx * 16;
    m.r[2].x = s->m.r[2].x;
    m.r[2].y = s->m.r[2].y;
    m.r[2].z = s->m.r[2].z;
    m.r[2].w = s->m.r[2].w;
    m.r[0].x = s->m.r[0].x;
    m.r[0].y = s->m.r[0].y;
    m.r[0].z = s->m.r[0].z;
    m.r[0].w = s->m.r[0].w;
    m.r[1].x = s->m.r[1].x;
    m.r[1].y = s->m.r[1].y;
    m.r[1].z = s->m.r[1].z;
    m.r[1].w = s->m.r[1].w;
    m.r[3].x = s->m.r[3].x;
    m.r[3].y = s->m.r[3].y;
    m.r[3].z = s->m.r[3].z;
    m.r[3].w = s->m.r[3].w;
    func_123FF0(&m.r[3].x, tb, dd);
    owner = o->owner;
    a = func_0699B0(owner);
    e = func_039B48(owner);
    pp = e->p;
    v[0] = pp[0];
    v[1] = pp[1];
    v[2] = pp[2];
    if ((unsigned)(o->type - 2) < 2)
        ok = func_19D410(D_0021060C);
    else
        ok = func_19D410(D_0021060C) ^ 1;
    t = 0;
    if (ok) {
        t = func_04B308(60.0f, owner, v, e, &m.r[3].x, a, D_0022A648);
        h = v[0] * v[0] + v[2] * v[2];
        if (t) {
            dx = m.r[3].x - t->x;
            dz = m.r[3].z - t->z;
            d2 = dx * dx + dz * dz;
            if (25.0f < d2) {
                ang = atan2f(v[1], sqrtf(h));
                if (0.2617993950843811f < fabsf(ang))
                    t = 0;
            }
        }
    }
    r = func_177470(o->owner, (float *)&m, t);
    if (r)
        o->count = o->count - 1;
    return r;
}
