/* LEVEL_04:0x1D6BC8 -- for each active slot that is not skipped, builds a delta vector and adds it, scaled, to the slot entry. */

struct Ent1D6BC8 {
    char pad0[0x30];
    float f30;
    char pad34[4];
    float f38;
};

struct Slot1D6BC8 {
    struct Ent1D6BC8 *p0;
    int w4;
};

struct Set1D6BC8 {
    struct Slot1D6BC8 slot[8];
    int w40;
    unsigned char b44;
};

struct Cfg1D6BC8 {
    char pad0[0x64];
    unsigned char b64;
};

struct Obj1D6BC8 {
    char pad0[0x54];
    struct Cfg1D6BC8 *p54;
    struct Set1D6BC8 *p58;
};

struct Pt1D6BC8 {
    char pad0[0x18];
};

extern int func_1D64E8(struct Obj1D6BC8 *o, struct Pt1D6BC8 *p, unsigned int i);
extern int func_1D68A8(struct Obj1D6BC8 *o, float *t, float *v, struct Ent1D6BC8 *e, struct Pt1D6BC8 *q);
extern int func_1D6AE0(struct Obj1D6BC8 *o, float *t, float *v, struct Ent1D6BC8 *e, struct Pt1D6BC8 *q);
extern void func_1D6698(struct Obj1D6BC8 *o, struct Pt1D6BC8 *p, unsigned int i, float *v, int n);

static __inline__ void Acc1D6BC8(float *dst, float *v, float t)
{
    dst[0] += v[0] * t;
    dst[2] += v[1] * t;
}

void func_1D6BC8(struct Obj1D6BC8 *o, struct Pt1D6BC8 *p)
{
    unsigned int i;
    unsigned int j;
    struct Set1D6BC8 *b;
    struct Cfg1D6BC8 *c;

    b = o->p58;
    c = o->p54;
    for (i = 0, j = 0; i < b->b44; j++, i++) {
        struct Ent1D6BC8 *e;
        float v[4];
        float t;
        int ok;

        if (func_1D64E8(o, p, i) != 0) {
            continue;
        }
        e = b->slot[i].p0;
        t = 0.0f;
        if (c->b64 != 0) {
            ok = func_1D68A8(o, &t, v, e, &p[i]);
        } else {
            ok = func_1D6AE0(o, &t, v, e, &p[j]);
        }
        if (ok != 0) {
            Acc1D6BC8((float *)((char *)e + 0x30), v, t);
            func_1D6698(o, p, i, v, 1);
        }
    }
}
