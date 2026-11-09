/* LEVEL_07:0x019C98 -- placement copy of LEVEL_03_019338.c: sets one bit in a bitmap when a record field is nonzero, using two global pointers. */
struct R19338 {
    char pad0[0x44];
    int f44;
};

struct G19338 {
    char pad0[0x10];
    unsigned int *f10;
};

struct P19338 {
    char pad0[0x5C];
    int f5C;
};

extern struct R19338 *D_0021B090;
extern struct G19338 *D_002036CC;

void func_019C98(struct P19338 *p)
{
    struct R19338 *r;
    struct G19338 *g;
    unsigned int *bm;
    int s;

    if (p->f5C != 0) {
        r = D_0021B090;
        g = D_002036CC;
        s = ((int)p - r->f44) >> 7;
        bm = g->f10;
        bm[(unsigned int)s >> 5] |= 1 << (s & 31);
    }
}
