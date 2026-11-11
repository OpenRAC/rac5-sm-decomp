/* LEVEL_04:0x201EC8 -- placement copy of LEVEL_08_22FDB8.c: interpolates floats of a record by a blend factor and forwards them. */
typedef struct M {
    float f00, f04, f08, f0C;
    char pad10[4];
    float f14;
    char pad18[4];
    float f1C, f20, f24, f28, f2C, f30;
    char pad34[4];
    float f38;
    char pad3C[4];
    float f40;
    char pad44[4];
    float f48, f4C, f50, f54;
    char pad58[4];
} M;
typedef struct T {
    char pad0[8];
    M *m;
    float t;
} T;
extern void func_201888(int a, int b, T *c, void *d, float x, float y,
                        float f2, float f3, float f4, float f5, float f6, float f7,
                        float f8, float f9);

void func_201EC8(int a, T *t, int c, float x, float y)
{
    M *m = t->m;
    float s = t->t;
    float p0 = (m->f2C - m->f00) * s + m->f00;
    float p1 = (m->f48 - m->f1C) * s + m->f1C;
    float p2 = (m->f30 - m->f04) * s + m->f04;
    float p3 = (m->f4C - m->f20) * s + m->f20;
    float p4 = (m->f38 - m->f0C) * s + m->f0C;
    float p5 = (m->f50 - m->f24) * s + m->f24;
    float u = (m->f40 - m->f14) * s + m->f14;
    float v = (m->f54 - m->f28) * s + m->f28;

    func_201888(a, c, t, &m->pad58, x, y, p0, p1, p2, p3, p4, p5, u, v);
}
