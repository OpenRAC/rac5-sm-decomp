/* LEVEL_04:0x1299D0 -- tests whether a point lies within a radius of an oriented 2D box. */
typedef struct {
    float x;
    float y;
} Vec2;
typedef struct {
    float f0;
    char pad4[4];
    float f8;
    char padC[0x14];
    float f20;
    char pad24[4];
    float f28;
    char pad2C[4];
    float f30;
    char pad34[4];
    float f38;
} Obj;
typedef struct {
    float f0;
    float f4;
} Ext;
extern void *memset(void *p, int c, int n);

static __inline__ float Excess(float d, float h)
{
    d = __builtin_fabsf(d) - h;
    return (d + __builtin_fabsf(d)) * 0.5f;
}

int func_1299D0(Obj *o, Ext *e, float x, float z, float r)
{
    Vec2 v;
    Vec2 lv;
    float a;
    float b;

    memset(&lv, 0, 8);
    lv.x = x - o->f30;
    lv.y = z - o->f38;
    v = lv;
    b = Excess(v.x * o->f0 + v.y * o->f8, e->f0);
    a = Excess(v.x * o->f20 + v.y * o->f28, e->f4);
    return b * b + a * a < r * r;
}
