/* LEVEL_01:0x0751B0 -- looks up an entry by owner and then ticks that entry (effects, countdown, callback). */
extern int rand(void);

typedef struct Obj Obj;
typedef struct Slot Slot;

typedef struct {
    char pad0[0x20];
    int (*fn)(void *, float, int, int, void *, void *, Obj *);
} Vtbl;

typedef struct {
    char pad0[0x40];
    Vtbl *vtbl;
} Owner;

struct Slot {
    Obj *owner;
    float count;
    char pad8[4];
    void (*onTick)(Obj *);
    int p10;
    int p14;
    int index;
};

struct Obj {
    char pad0[0x64];
    unsigned int flags;
};

typedef struct {
    int mode;
    float scale;
    int a;
    int b;
} Row;

extern int D_001F60C4;
extern Slot D_0023A0B0[];
extern Row D_00218D58[];
extern char D_00217E78[];
extern char D_00217E98[];

extern int func_08BCB8(void);
extern float func_07CFB8(Obj *, float *, int);
extern void func_075470(float *, float);
extern void func_079820(Obj *, unsigned int, int, int);
extern void func_075058(Slot *);
extern void func_015D88(int, int, Obj *, int);

Slot *func_0751B0(Obj *o)
{
    Slot *p;
    Slot *end = D_0023A0B0 + D_001F60C4;

    for (p = D_0023A0B0; p != end; p++) {
        if (p->owner == o)
            return p;
    }
    return 0;
}

void func_075200(Obj *o)
{
    float m[16];
    Slot *s;
    int n;
    int r;
    float step;
    Owner *own;
    char *p1;
    char *p2;
    Vtbl *vt;
    int (*fn)(void *, float, int, int, void *, void *, Obj *);
    Row *row;
    float f;

    s = func_0751B0(o);
    if (s->onTick)
        s->onTick(o);
    n = func_08BCB8();
    if (n)
        r = rand() % n;
    else
        r = 0;
    step = 1.0f;
    func_07CFB8(o, m, r);
    func_075470(m, step);
    func_079820(o, 0xFF228800, 0, 0);
    s->count = s->count - step;
    if (s->count == 0.0f) {
        func_075058(s);
        return;
    }
    if (o->flags & 8)
        return;
    own = (Owner *)s->owner;
    vt = own->vtbl;
    if (vt == 0)
        return;
    fn = vt->fn;
    if (fn == 0)
        return;
    row = &D_00218D58[s->index];
    p1 = D_00217E78;
    p2 = D_00217E98;
    switch (row->mode) {
    case 0:
    case 1:
        f = row->scale;
        break;
    case 2:
        f = row->scale * 0.5f;
        break;
    default:
        f = row->scale;
        break;
    }
    n = fn(own, f, row->a, row->b, p1, p2, o);
    if (s->p10 != 0 && s->p14 != 0)
        func_015D88(s->p14, s->p10, s->owner, n);
    if (n == 3)
        func_075058(s);
}
