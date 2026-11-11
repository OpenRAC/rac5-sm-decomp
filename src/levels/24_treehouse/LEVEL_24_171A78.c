/* LEVEL_24:0x171A78 -- two-stage ramp that renormalizes a direction vector and then launches a follow-up. */
typedef struct { float x, y, z; } Vec3;
typedef struct { unsigned char pad[0x10]; Vec3 v; } Dir;
typedef struct { unsigned char pad0[4]; int res; int p8; Dir *dir; unsigned char pad1[4]; float t; } Ext;
typedef struct {
    unsigned char pad0[0x20];
    Vec3 v;
    unsigned char pad1[0x45 - 0x2C];
    unsigned char state;
    unsigned char pad2[0x58 - 0x46];
    Ext *ext;
    unsigned char pad3[8];
    int flags;
} Obj;
extern float sqrtf(float);
extern int func_172D88(int, void *, float, float);

#define NORM(vp, sc) \
    { \
        float l = (vp)->x * (vp)->x + (vp)->y * (vp)->y + (vp)->z * (vp)->z; \
        if (!(l < 2.384185791015625e-07f)) { \
            float k = (sc) / sqrtf(l); \
            (vp)->x *= k; \
            (vp)->y *= k; \
            (vp)->z *= k; \
        } \
    }

void func_171A78(Obj *o)
{
    Ext *e;
    Vec3 *v;
    Vec3 *u;
    float s;

    e = o->ext;
    if (o->state == 0) {
        s = 0.2f + e->t;
        e->t = s;
        v = &e->dir->v;
        NORM(v, s);
        if (e->t >= 1.0f) {
            e->t = 0.1f;
            o->flags &= ~0x20;
            v = &e->dir->v;
            NORM(v, 1.0f);
            o->state = 1;
        }
    } else if (o->state == 1) {
        s = 0.2f + e->t;
        e->t = s;
        u = &o->v;
        NORM(u, s);
        if (e->t >= 1.0f) {
            u = &o->v;
            NORM(u, 1.0f);
            e->res = func_172D88(e->p8, o, 10.0f, 0.8999999761581421f);
            o->state = 2;
        }
    }
}
