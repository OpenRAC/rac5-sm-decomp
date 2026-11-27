/* LEVEL_04:0x057378 -- placement copy of LEVEL_01_0559B8.c: probes the ground below an object and records the result. */
typedef struct {
    float x, y, z, w;
} V4;

typedef struct {
    char pad0[0x34];
    float f34;
} Surf;

typedef struct {
    V4 p;
    Surf *surf;
    int kind;
} Hit;

typedef struct {
    char pad0[0x30];
    V4 pos;
    char pad40[0x2F4 - 0x40];
    char probe[0x10];
    V4 up;
    char pad314[0x334 - 0x314];
    Surf *cur;
    Surf *prev;
    float height;
} Obj;

static inline void Copy3(V4 *d, V4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static inline void Copy4(V4 *d, V4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

static inline void ToDir(V4 *d, V4 *s)
{
    Copy3(d, s);
    d->w = 0;
}

extern int func_0570F0(float a, float b, float c, V4 *p, char *probe, V4 *out, Hit *hit, int *flag);
extern int func_056620(Obj *o, int r, int flag);

void func_057378(Obj *o)
{
    V4 v;
    Hit h;
    int flag;
    int r;
    V4 *q;

    if (o->cur) {
        o->prev = o->cur;
    }
    o->cur = 0;
    r = func_0570F0(0.5f, 1.0f, 3.0f, &o->pos, o->probe, &v, &h, &flag);
    if (r == 0) {
        if (h.kind == 2) {
            o->cur = h.surf;
            o->height = h.surf->f34;
        }
    }
    func_056620(o, r, flag);
    if (r == 0) {
        Copy4(&o->pos, &v);
        ToDir(&o->up, &h.p);
    }
}
