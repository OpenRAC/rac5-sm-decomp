/* LEVEL_02:0x1A40B0 -- when a sub-record word is clear and a global pointer is set, passes that pointer's four floats and a set of flags to a helper. */

struct Obj {
    unsigned char pad0[0x54];
    unsigned char *p54;
};

struct Gfx {
    unsigned char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

extern struct Gfx *D_0021D60C;

void func_0872A0(struct Obj *o, struct Gfx *g, unsigned char *p, int a, float x1, int b, float x2,
                 int c, float x3, int d, float x4, int e);

void func_1A40B0(struct Obj *o)
{
    unsigned char *q;
    unsigned char *p;
    struct Gfx *g;

    q = o->p54;
    if (*(int *)(q + 0x0C) != 0) {
        return;
    }
    p = q + 0x0C;
    g = D_0021D60C;
    if (g == 0) {
        return;
    }
    func_0872A0(o, g, p, 0, g->f14, 0, g->f18, 0, g->f1C, 0, g->f20, 1);
}
