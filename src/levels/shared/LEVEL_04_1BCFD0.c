/* LEVEL_04:0x1BCFD0 -- records the controller's target on the object and computes the planar unit direction and distance to it. */

struct T {
    char pad_00[0x30];
    float x_30;
    char pad_34[4];
    float z_38;
};

struct S {
    char pad_00[0x24];
    struct T *t_24;
};

struct C {
    char pad_00[0x40];
    struct T **pp_40;
};

struct B {
    char pad_00[0x58];
    struct C *c_58;
};

struct A {
    struct B *b_00;
};

struct O {
    char pad_00[0x30];
    float x_30;
    char pad_34[4];
    float z_38;
    char pad_3C[0x54 - 0x3C];
    struct A *a_54;
    struct S *s_58;
};

extern int memset(void *p, int c, int n);
extern float sqrtf(float x);

int func_1BCFD0(struct O *o, float *len_out, float *dir)
{
    float buf[2];
    struct T *t;
    struct S *s;
    struct T **pp;
    float len;
    float r;
    float inv;
    float l2;

    t = 0;
    pp = o->a_54->b_00->c_58->pp_40;
    s = o->s_58;
    if (pp != 0) {
        t = *pp;
    }
    s->t_24 = t;
    if (t != 0) {
        dir[0] = t->x_30 - o->x_30;
        dir[1] = t->z_38 - o->z_38;
        memset(buf, 0, 8);
        l2 = dir[0] * dir[0] + dir[1] * dir[1];
        if (l2 < 2.38418579e-07f) {
            dir[0] = buf[0];
            dir[1] = buf[1];
            len = 0.0f;
        } else {
            r = sqrtf(l2);
            inv = 1.0f / r;
            dir[0] = inv * dir[0];
            dir[1] = inv * dir[1];
            len = r;
        }
        *len_out = len;
    }
    return s->t_24 != 0;
}
