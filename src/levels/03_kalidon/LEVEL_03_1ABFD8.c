/* LEVEL_03:0x1ABFD8 -- builds a three-float vector from an owner's record and calls a helper with a 0.1 offset. */

struct P1ABFD8 {
    float f00;
};

struct S1ABFD8 {
    float f00;
    char pad04[4];
    float f08;
    struct P1ABFD8 *p0C;
    char sub10[0x34 - 0x10];
    char sub34[4];
};

struct E1ABFD8 {
    char pad00[0x58];
    struct S1ABFD8 *p58;
};

extern void func_078578(void *a, float *b, void *c, int d, float f);
extern char D_00230D88[];

void func_1ABFD8(struct E1ABFD8 *e)
{
    struct S1ABFD8 *s;
    float v[3];

    s = e->p58;
    v[0] = s->f00;
    v[2] = s->f08;
    v[1] = s->p0C->f00 + 0.1f;
    func_078578(s->sub34, v, D_00230D88, 2, 0.1f);
}
