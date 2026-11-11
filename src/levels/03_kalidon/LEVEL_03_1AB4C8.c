/* LEVEL_03:0x1AB4C8 -- initialises the object's effect record: copies the position into it, sets its two scale floats and starts the emitter with the shared table; returns 1. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

struct Rec {
    char pad00[0x10];
    Vec3 pos;
    char pad1C[0];
    float f1C;
    char pad20[0x10];
    float f30;
    char sub34[0x40];
};

struct Obj {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x1C];
    struct Rec *f58;
};

extern char D_00240610[];
extern void func_077FC8(char *a0, int a1, int a2, int a3, char *t0);

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

int func_1AB4C8(struct Obj *o)
{
    struct Rec *r = o->f58;

    Copy3(&r->pos, &o->pos);
    r->f30 = -0.10000000894069672f;
    r->f1C = 0.06666667f;
    func_077FC8(r->sub34, 4, 0x47, 0x48, D_00240610);
    return 1;
}
