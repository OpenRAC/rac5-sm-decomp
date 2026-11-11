/* LEVEL_15:0x0F9B38 -- fills an object's record from a source block and computes a radius value. */
struct V4 {
    float x, y, z, w;
};
struct Blk {
    int w[6];
};
struct Src {
    char pad0[4];
    int f4;
    char pad1[0x14 - 8];
    int f14;
};
struct Obj {
    char pad0[0x1C];
    char f1C[4];
    struct V4 v;
    char pad1[0xCC - 0x30];
    struct Blk blk;
    float fE4;
    int fE8;
    int fEC;
    int fF0;
};
extern char D_0016F5B8[];
extern float sqrtf(float x);
extern void func_080488(struct Obj *o, int value);
extern void func_0294D8(char *p, int a, int b);
extern float func_066630(struct Src *s);

void func_0F9B38(struct Obj *o, struct Blk *b, struct Src *s, int a, int c)
{
    struct V4 *p;

    func_080488(o, (int)D_0016F5B8);
    o->blk = *b;
    func_0294D8(o->f1C, s->f4, 0xFFFF);
    o->fE4 = func_066630(s);
    if (o->fE4 <= 0.0f) {
        p = &o->v;
        o->fE4 = p->w + sqrtf(p->x * p->x + p->y * p->y + p->z * p->z);
    }
    o->fE8 = s->f14;
    o->fEC = a;
    o->fF0 = c;
}
