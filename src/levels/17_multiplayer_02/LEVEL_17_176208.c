/* LEVEL_17:0x176208 -- placement copy of LEVEL_01_1CA3D0.c: notifies nearby objects with the unit direction towards a point. */
typedef struct Obj Obj;
typedef struct { char pad0[0x20]; int (*fn)(Obj *, int, int, float *, float, float *, void *); } Cls;
struct Obj { char pad0[0x30]; float pos[3]; char pad3C[4]; Cls *cls; };
extern float sqrtf(float);
extern int func_01A3D8(Obj **out, int max, float *pos, int a, int b, int c, int d, float r);

void func_176208(void *src, float *pos, float r)
{
    Obj *objs[32];
    float d[3];
    unsigned n;
    unsigned i;
    Obj *o;
    float len2;
    float inv;
    float one;
    float *p;

    one = 1.0f;
    n = func_01A3D8(objs, 0x20, pos, 0x129, 0x101, 0x30, 1, r * 9.0f + one);
    for (i = 0; i < n; i++) {
        o = objs[i];
        if (o->cls != 0 && o->cls->fn != 0) {
            p = o->pos;
            d[0] = pos[0] - o->pos[0];
            d[1] = pos[1] - p[1];
            d[2] = pos[2] - p[2];
            len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
            if (!(len2 < 2.384185791015625e-7f)) {
                inv = one / sqrtf(len2);
                d[0] *= inv;
                d[1] *= inv;
                d[2] *= inv;
            }
            o->cls->fn(o, 0, 2, o->pos, 0.0f, d, src);
        }
    }
}
