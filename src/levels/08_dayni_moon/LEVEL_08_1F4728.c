/* LEVEL_08:0x1F4728 -- sets a byte flag, then makes two calls that pass a shared float block and two sub-pointers. */
struct Q4 {
    char pad0[4];
    int w4;
};

struct B58 {
    char pad0[0x30];
};

struct A8 {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x54 - 0x46];
    struct Q4 *p54;
    struct B58 *p58;
};

struct G {
    char pad0[0x14];
    float v0;
    float v1;
    float v2;
    float v3;
};

extern struct G *D_00252748;
void func_088940(void *a0, struct G *a1, void *a2, int a3, int a4, int a5, int a6, int a7, float f0, float f1, float f2, float f3);

void func_1F4728(struct A8 *a0)
{
    struct B58 *s0;
    struct Q4 *s1;
    struct G *g;
    char *p;
    char *q;
    int w;

    a0->b45 = 2;
    s0 = a0->p58;
    g = D_00252748;
    s1 = a0->p54;
    p = (char *)s0 + 0x2C;
    if (g != 0) {
        func_088940(a0, g, p, 0, 0, 0, 0, 0, g->v0, g->v1, g->v2, g->v3);
    }
    g = D_00252748;
    w = s1->w4;
    q = (char *)s0 + 0x30;
    if (g != 0) {
        func_088940((void *)w, g, q, 0, 0, 0, 0, 0, g->v0, g->v1, g->v2, g->v3);
    }
}
