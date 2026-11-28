/* LEVEL_09:0x171060 -- placement copy of LEVEL_01_17D5D0.c: looks up entry 11, clamps its count to three and forwards the count, the object's sub-block and the state's rate to the helper. */
struct This17D5D0 {
    char pad00[0x30];
    char sub30[0x58 - 0x30];
    struct S17D5D0 *p58;
};

struct S17D5D0 {
    char pad00[0x190];
    float f190;
    char pad194[0x28C - 0x194];
    char sub28C[4];
};

struct E17D5D0 {
    char pad00[0x3C];
    unsigned int count;
};

extern int D_0021C9B8;
extern struct E17D5D0 *func_023920(int a, int b);
extern void func_170ED8(void *a, int b, void *c, float f);

void func_171060(struct This17D5D0 *t)
{
    struct S17D5D0 *s;
    unsigned int three;
    struct E17D5D0 *e;
    const unsigned int *q;
    float *rate;

    s = t->p58;
    e = func_023920(11, D_0021C9B8);
    three = 3;
    q = &e->count;
    if (!(*q < three)) {
        q = &three;
    }
    rate = &s->f190;
    func_170ED8(s->sub28C, *q, t->sub30, *rate);
}
