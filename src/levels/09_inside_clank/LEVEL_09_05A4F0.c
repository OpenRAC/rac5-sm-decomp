/* LEVEL_09:0x05A4F0 -- placement copy of LEVEL_22_0531A0.c: decays a stored float toward zero for a flagged object, clears the flag and reports one.  */
struct G0531A0 {
    char pad0[0x168];
    int w168;
    char pad16C[0x1A8 - 0x16C];
    float f1A8;
    char pad1AC[0x1B4 - 0x1AC];
    unsigned char b1B4;
};

struct A0531A0 {
    char pad0[0x102];
    short h102;
};

extern struct G0531A0 D_002206F8;

int func_05A4F0(struct A0531A0 *a0)
{
    struct G0531A0 *g;
    float f;

    g = &D_002206F8;
    if (g->b1B4 == 0) {
        return 0;
    }
    if (g->w168 == 0) {
        return 0;
    }
    f = g->f1A8 - 1.0f;
    g->f1A8 = f;
    if (0.0f < f) {
        return 0;
    }
    g->f1A8 = 0.0f;
    g->b1B4 = 0;
    a0->h102 = 13;
    return 1;
}
