/* LEVEL_07:0x168528 -- scales one three-float vector by a table factor and adds a second vector into the output. */
struct A168528 {
    char pad0[0x113];
    signed char b113;
};

struct V168528 {
    char pad0[0x10];
    float a[3];
    char pad1[0x14];
    float b[3];
};

struct T168528 {
    char pad0[4];
    float f04;
};

extern struct T168528 D_0021B9E8[];

void func_168528(int unused, struct A168528 *idx, float *out, struct V168528 *v)
{
    float *pa;
    float *pb;
    float s;

    s = D_0021B9E8[idx->b113].f04;
    pa = v->a;
    pb = v->b;
    out[0] = pb[0] + pa[0] * s;
    out[1] = pb[1] + pa[1] * s;
    out[2] = pb[2] + pa[2] * s;
}
