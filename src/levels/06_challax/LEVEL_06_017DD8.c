/* LEVEL_06:0x017DD8 -- placement copy of LEVEL_03_019338.c: sets one bit in a bitmap when a record field is nonzero, using two global pointers. */
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

extern struct R19338 *D_001F5990;
extern struct G19338 *D_001DE2CC;

void func_017DD8(struct P19338 *p)
{
    struct R19338 *r;
    struct G19338 *g;
    unsigned int *bm;
    int s;

    if (p->f5C != 0) {
        r = D_001F5990;
        g = D_001DE2CC;
        s = ((int)p - r->f44) >> 7;
        bm = g->f10;
        bm[(unsigned int)s >> 5] |= 1 << (s & 31);
    }
}
