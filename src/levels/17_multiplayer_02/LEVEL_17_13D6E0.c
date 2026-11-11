/* LEVEL_17:0x13D6E0 -- placement copy of LEVEL_16_141CD0.c: notifies every nearby entity that has a handler, passing the direction toward the source. */
typedef struct Handler {
    char pad[0x20];
    int (*fn)(void *self, int a, int b, float *at, float *dir, void *src, float amount);
} Handler;

typedef struct Ent {
    char pad0[0x30];
    float pos[3];
    char pad1[0x40 - 0x3C];
    Handler *handler;
} Ent;

typedef struct Owner {
    char pad[0x59C];
    Ent *self;
} Owner;

typedef struct Link {
    Owner *owner;
    int index;
    char pad[4];
} LinkDummy;

typedef struct State {
    Owner *owner;
    char pad[4];
    int row;
} State;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad1[0x58 - 0x3C];
    State *state;
} Obj;

typedef struct Row {
    int mode;
    float amount;
    int a;
    int b;
} Row;

extern Row D_001C10A8[];
extern float D_001D1930;
extern float sqrtf(float x);
extern unsigned int func_01A3D8(Ent **out, int max, float *pos, int a3, int a4, int a5, int a6, float range);
extern void func_014F80(Owner *o, int kind, Ent *e, int r);

static inline void vsub(float *o, float *a, float *b)
{
    o[0] = a[0] - b[0];
    o[1] = a[1] - b[1];
    o[2] = a[2] - b[2];
}

void func_13D6E0(Obj *o, float *pos)
{
    Ent *list[16];
    float d[3];
    State *st = o->state;
    unsigned int n;
    unsigned int i;
    Ent *e;
    Row *row;
    float amount;
    float len;
    float inv;
    int r;
    int k;

    n = func_01A3D8(list, 0x10, pos, 0x129, 0x101, 0x36, 1, 2.0f);
    for (i = 0; i < n; i++) {
        e = list[i];
        if (e == o->state->owner->self)
            continue;
        if (e->handler->fn == 0)
            continue;
        vsub(d, pos, e->pos);
        if (!(d[0] * d[0] + d[1] * d[1] + d[2] * d[2] < 2.384185791015625e-07f)) {
            len = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
            inv = 1.0f / len;
            d[0] *= inv;
            d[1] *= inv;
            d[2] *= inv;
        }
        k = st->row + 0xAE;
        row = &D_001C10A8[k];
        if (row->mode == 0)
            amount = row->amount;
        else if (row->mode < 0)
            amount = row->amount;
        else if (row->mode < 3)
            amount = D_001D1930 * row->amount;
        else
            amount = row->amount;
        r = e->handler->fn(e, row->a, row->b, o->pos, d, o, amount);
        func_014F80(o->state->owner, 9, e, r);
    }
}
