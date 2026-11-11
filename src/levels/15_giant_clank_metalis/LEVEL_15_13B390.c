/* LEVEL_15:0x13B390 -- placement copy of LEVEL_08_20F970.c: pops one node from a global free list, initializes it from the argument, and returns it or zero. */
struct Y {
    int w0;
    char pad0[4];
    int w8;
};

struct X {
    char pad0[8];
    float f8;
    char pad1[0xC0 - 0x0C];
    int wC0;
    char pad2[0xC8 - 0xC4];
    struct Y *wC8;
};

extern struct Y *D_002F5390;
void func_13B1A8(struct X *p, int v);
int func_06E290(int a0, char *a1);
void func_06D200(struct X *p, char *q, float f);

struct X *func_13B390(struct Y *a0, float a, float b)
{
    struct Y *g;
    struct X *s2;
    char *s0;
    int s1;

    g = D_002F5390;
    if (g == 0) {
        s2 = 0;
    } else {
        D_002F5390 = (struct Y *)g->w0;
        s2 = (struct X *)((char *)g + 0x10);
    }
    if (s2 == 0) {
        return 0;
    }
    s1 = a0->w8;
    func_13B1A8(s2, a0->w0);
    s0 = (char *)s2 + 0x5C + s2->wC0 * 40;
    s2->wC8 = a0;
    func_06E290(s1, s0);
    func_06D200(s2, s0, a);
    s2->f8 = b;
    return s2;
}
