/* LEVEL_02:0x07BA98 -- placement copy of LEVEL_01_0751B0.c: looks up an entry by owner and then ticks that entry (effects, countdown, callback). */
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

extern int D_0020B084;
extern Slot D_002515C0[];
extern Row D_0022DCD8[];
extern char D_0022CDF8[];
extern char D_0022CE18[];

extern int func_0925B0(void);
extern float func_083888(Obj *, float *, int);
extern void func_07BD58(float *, float);
extern void func_080108(Obj *, unsigned int, int, int);
extern void func_07B940(Slot *);
extern void func_016950(int, int, Obj *, int);

Slot *func_07BA98(Obj *o)
{
    Slot *p;
    Slot *end = D_002515C0 + D_0020B084;

    for (p = D_002515C0; p != end; p++) {
        if (p->owner == o)
            return p;
    }
    return 0;
}

void func_07BAE8(Obj *o)
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

    s = func_07BA98(o);
    if (s->onTick)
        s->onTick(o);
    n = func_0925B0();
    if (n)
        r = rand() % n;
    else
        r = 0;
    step = 1.0f;
    func_083888(o, m, r);
    func_07BD58(m, step);
    func_080108(o, 0xFF228800, 0, 0);
    s->count = s->count - step;
    if (s->count == 0.0f) {
        func_07B940(s);
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
    row = &D_0022DCD8[s->index];
    p1 = D_0022CDF8;
    p2 = D_0022CE18;
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
        func_016950(s->p14, s->p10, s->owner, n);
    if (n == 3)
        func_07B940(s);
}
