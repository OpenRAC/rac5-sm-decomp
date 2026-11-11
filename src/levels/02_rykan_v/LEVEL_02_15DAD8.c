/* LEVEL_02:0x15DAD8 -- reacts when an object is within range of a fixed position. */
typedef struct V {
    float x, y, z;
} V;
typedef struct G {
    char pad0[0x30];
    V p;
} G;
typedef struct O {
    char pad0[0x30];
    V p;
    char pad3C[0x34];
    float f70;
} O;
extern G D_0024C650;
extern int func_08E8B8(int a);
extern int func_06FC18(G *g);
extern void func_08E718(int a);
extern void func_15D640(O *o, int a);
extern void func_160770(O *o, int a);
extern int func_138860(int a);
extern void func_0BBDB8(void *a, void *b, void *c, void *d);

void func_15DAD8(O *o)
{
    int flags;
    G *g;
    V *a;
    V *b;
    float dx, dy, dz;
    flags = func_08E8B8(2);
    g = &D_0024C650;
    if (func_06FC18(g))
        return;
    a = &g->p;
    b = &o->p;
    dx = o->p.x - g->p.x;
    dy = b->y - a->y;
    dz = b->z - a->z;
    if (dx * dx + dy * dy + dz * dz < 2.25f) {
        if (flags & 0x1000) {
            func_08E718(0x10);
            o->f70 = 22.5f;
            func_15D640(o, 1);
            func_160770(o, 0);
        } else {
            func_0BBDB8(0, (void *)func_138860(0x2EE), 0, 0);
        }
    }
}
