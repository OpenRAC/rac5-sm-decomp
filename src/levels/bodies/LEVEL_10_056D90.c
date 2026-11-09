/* LEVEL_10:0x056D90 -- placement copy of LEVEL_01_0584D8.c: gathers nearby objects and runs their class callback with a position and a direction record. */

struct Cls_0584D8 {
    char pad_00[0x20];
    void (*cb)(void *o, float f12, int a1, int a2, float *pos, float *dir, int t1);
    int id_24;
};

struct Obj_0584D8 {
    char pad_00[0x40];
    struct Cls_0584D8 *cls;
};

extern int func_01BA68(void *buf, int n, float *pos, int a3, int t0, int t1, int t2);

static __inline__ void init4_0584D8(float *v, float *src, float w)
{
    v[0] = src[0];
    v[1] = src[1];
    v[2] = src[2];
    v[3] = w;
}

void func_056D90(float *pos, int a1, int a2, float f12, float f13, float *dir, int t0, int t1)
{
    struct Obj_0584D8 *list[16];
    float p[4];
    float d[4];
    struct Obj_0584D8 **pp;
    struct Obj_0584D8 **end;
    struct Obj_0584D8 *o;
    struct Cls_0584D8 *c;

    end = list + func_01BA68(list, 0x10, pos, 0x169, 0x101, 0xAE3E, 1);
    init4_0584D8(p, pos, 1.0f);
    init4_0584D8(d, dir, 0.0f);
    for (pp = list; pp != end; pp++) {
        o = *pp;
        c = o->cls;
        if (t1 == 0 || c->id_24 == t1) {
            c->cb(o, f13, a1, a2, p, d, t0);
        }
    }
}
