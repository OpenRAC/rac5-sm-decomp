/* LEVEL_02:0x17A8C0 -- when the owner flag is clear and a global block exists, calls the helper with four floats from that block. */

void func_0872A0(void *a0, void *a1, void *a2, int a3, int t0, int t1, int t2, int t3, float f0, float f1, float f2, float f3);

struct G {
    unsigned char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

struct Sub {
    unsigned char pad00[0x1C];
    int w1C;
};

struct Obj {
    unsigned char pad00[0x54];
    struct Sub *p54;
};

extern struct G *D_003AD500;

void func_17A8C0(struct Obj *o)
{
    struct Sub *s;
    struct G *g;
    int *w;

    s = o->p54;
    if (s->w1C != 0) {
        return;
    }
    w = &s->w1C;
    g = D_003AD500;
    if (g == 0) {
        return;
    }
    func_0872A0(o, g, w, 0, 0, 0, 0, 1, g->f14, g->f18, g->f1C, g->f20);
}
