/* LEVEL_07:0x1AC590 -- copies a partner's matrix into an object and, while it is the tracked one and a lookup succeeds, offsets a trail point along its velocity and direction and emits two puffs. */
typedef struct {
    float v[4];
} Vec4;

typedef struct {
    char pad0[0x24];
    unsigned int id;
} Info;

typedef struct {
    char pad0[4];
    char *tab;
} Table;

typedef struct Obj Obj;

struct Obj {
    Vec4 m[4];
    Table *info;
    unsigned char sel;
    char pad45[0x1F];
    int flags;
};

typedef struct {
    char pad0[4];
    void *key;
    Obj *other;
} Src;

typedef struct {
    char pad0[0x30];
    char sub[4];
    char pad34[0x300];
    Obj *cur;
} Glob;

static __inline__ void Vec3_AddScaled(float *r, float *a, float *b, float k)
{
    r[0] = a[0] + b[0] * k;
    r[1] = a[1] + b[1] * k;
    r[2] = a[2] + b[2] * k;
}

extern Glob D_0024AA40;
extern unsigned int D_002082B8[1];

extern int func_086800(void *key, void *table);
extern void func_1AAEF0(Obj *a, float *p, Obj *b, float *v, float *d, int flag);

void func_1AC590(Obj *o, Src *s, float *out)
{
    Obj *cur;
    Glob *g;
    Obj *other;
    int on;
    int t;
    float k;

    g = &D_0024AA40;
    cur = g->cur;
    t = 0;
    if (cur != 0) {
        t = *(unsigned int *)((char *)cur->info + 0x24) == 0x90ADE4EB;
    }
    other = s->other;
    on = t;
    if (other != 0) {
        o->m[2].v[0] = other->m[2].v[0];
        o->m[2].v[1] = other->m[2].v[1];
        o->m[2].v[2] = other->m[2].v[2];
        o->m[2].v[3] = other->m[2].v[3];
        o->m[0].v[0] = other->m[0].v[0];
        o->m[0].v[1] = other->m[0].v[1];
        o->m[0].v[2] = other->m[0].v[2];
        o->m[0].v[3] = other->m[0].v[3];
        o->m[1].v[0] = other->m[1].v[0];
        o->m[1].v[1] = other->m[1].v[1];
        o->m[1].v[2] = other->m[1].v[2];
        o->m[1].v[3] = other->m[1].v[3];
        o->m[3].v[0] = other->m[3].v[0];
        o->m[3].v[1] = other->m[3].v[1];
        o->m[3].v[2] = other->m[3].v[2];
        o->m[3].v[3] = other->m[3].v[3];
        if (on) {
            if (cur != other) {
                on = 0;
            }
        }
    }
    if (s->key == 0) {
        return;
    }
    if (func_086800(s->key, g->sub) == 0) {
        o->flags |= 0x400;
    } else if (on) {
        k = *(float *)(o->info->tab + o->sel * 0x34 + 0x28) + 0.2f;
        Vec3_AddScaled(out, o->m[3].v, o->m[1].v, k);
        Vec3_AddScaled(out, out, o->m[2].v, -0.4f);
        if ((D_002082B8[0] & 3) == 0) {
            func_1AAEF0(o, out, o, o->m[1].v, o->m[2].v, 1);
            func_1AAEF0(o, out, o, o->m[1].v, o->m[2].v, 0);
        }
        o->flags &= ~0x400;
    } else {
        o->flags |= 0x400;
    }
}
