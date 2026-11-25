/* LEVEL_04:0x171728 -- four-state controller of a thrown pickup: state 0 waits and launches the carrier, state 1 starts the loop effect then looks up and binds the matching actor, state 2 checks the contact points of the target for a hit and releases the actor, state 3 waits for the release to finish. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Ent {
    char pad0[0x24];
    unsigned int key;
    char pad28[0x44 - 0x28];
} Ent;

typedef struct Table {
    char pad0[0x34];
    Ent *ents;
    unsigned int count;
} Table;

typedef struct Obj Obj;

typedef struct Vt {
    char pad0[0x20];
    void (*fn)(float f, Obj *e, int a, int b, int c, int d, int e2);
} Vt;

typedef struct Ctl {
    char pad0[0x60];
    Obj *held;
    Obj *w64;
} Ctl;

struct Obj {
    char pad0[0x10];
    V3 vel;
    char pad1C[0x30 - 0x1C];
    V3 pos;
    char pad3C[4];
    Vt *vt;
    unsigned char b44;
    unsigned char state;
    unsigned char flag;
    char pad47[0x58 - 0x47];
    Ctl *ctl;
    char pad5C[0x70 - 0x5C];
    float timer;
};

typedef struct Hit {
    Obj *obj;
    int w4;
} Hit;

typedef struct Hits {
    Hit e[8];
    int pad40;
    unsigned char count;
} Hits;

typedef struct Other {
    char pad0[0x58];
    Hits *hits;
} Other;

typedef struct Rec {
    float f;
    float pad[5];
} Rec;

typedef struct Info {
    char pad0[0x14];
    Rec r[1];
} Info;

extern Table *D_002201B0;
extern float D_00239AA8[];
extern char D_00239AA0[];
extern char D_00239AC8[];
extern char D_00231808[];

extern void func_077CA0(Ctl *c, void *y, V3 *p, void *q, void *z);
extern Obj *func_07F9D0(Ent *e, unsigned int key, Obj *o, int n);
extern void func_077EA8(void *context, void *object, int mode, void *first, V3 *second);
extern void func_077E48(Ctl *c);
extern int func_1715A0(V3 *a0, void *a1, void *a2, float x);
extern Obj *func_16F868(Other *a, Obj *b);

static __inline__ void MulAdd3(V3 *out, V3 *a, V3 *b, float s)
{
    out->x = a->x + b->x * s;
    out->y = a->y + b->y * s;
    out->z = a->z + b->z * s;
}

static __inline__ Ent *Find(Table *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->ents[i].key == key)
            return &t->ents[i];
    }
    return 0;
}

void func_171728(Obj *o, Other *other, Info *info)
{
    Ctl *c;
    V3 v;
    Ent *e;
    Obj *r;
    Obj *held;
    unsigned int i;
    unsigned int n;
    unsigned char st;
    char *tab;

    st = o->state;
    o->timer = o->timer - 1.0f;
    c = o->ctl;
    switch (st) {
    case 0:
        if (o->timer <= 0.0f) {
            MulAdd3(&v, &o->pos, &o->vel, 3.0f);
            func_077CA0(c, D_00239AC8, &v, o, o);
            o->state = 1;
            o->timer = 30.0f;
            o->flag = 0;
        }
        break;
    case 1:
        if (o->timer <= 0.0f) {
            if (o->flag != 0) {
                e = Find(D_002201B0, 0xDB789A65);
                if (e == 0)
                    r = 0;
                else
                    r = func_07F9D0(e, 0xDB789A65, o, 0xFF);
                c->held = r;
                if (r != 0) {
                    r->pos.y = r->pos.y + 0.08f;
                    o->state = 2;
                }
            } else {
                o->timer = (float)(int)(D_00239AA8[2] * 30.0f);
                MulAdd3(&v, &o->pos, &o->vel, 5.0f);
                func_077EA8(D_00239AA8, o, 1, D_00231808, &v);
                o->flag = 1;
            }
            func_077E48(c);
        }
        break;
    case 2:
        held = c->held;
        n = other->hits->count;
        tab = D_00239AA0;
        for (i = 0; i < n; i++) {
            if (func_1715A0(&other->hits->e[i].obj->pos, o, tab, info->r[i].f) != 0) {
                c->w64 = func_16F868(other, held);
                held->vt->fn(0.0f, held, 2, 1, 0, 0, 0);
                c->held = 0;
                o->state = 3;
                o->timer = 150.0f;
                return;
            }
        }
        break;
    case 3:
        if (c->w64->state == 3) {
            c->w64 = 0;
            o->timer = 150.0f;
            o->state = 0;
        }
        break;
    }
}
