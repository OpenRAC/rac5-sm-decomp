/* LEVEL_10:0x1CF308 -- placement copy of LEVEL_03_1DBC80.c: computes a clamped offset from a helper and applies a scaled update. */
struct B { char p0[8]; float f08; };
struct A {
    char p0[0x34];
    float f34;
    char p1[0x46 - 0x38];
    unsigned char f46;
    char p2[0x54 - 0x47];
    struct B *f54;
};
extern int func_1CF0B0(struct A *a, float *b);
extern float D_00238B04;
extern void func_01FD70(void *a, void *b, void *c, int d, int e, float f);

void func_1CF308(struct A *a0)
{
    float f20 = a0->f34;
    float loc2[8];
    float loc[4];
    struct B *s0;
    float *c;
    int v;

    s0 = a0->f54;
    v = func_1CF0B0(a0, loc);
    if (v != 0 && loc[0] < f20) {
        s0->f08 = f20 - loc[0];
        a0->f46 = 1;
    } else {
        s0->f08 = 0.0f;
        c = (float *)((char *)a0 + 0x30);
        func_01FD70(&s0->f08, loc2, c, 0x29, 0, c[1] - D_00238B04);
        a0->f46 = 0;
    }
}
