/* LEVEL_04:0x1DE270 -- placement copy of LEVEL_03_1DB000.c: visits each record of a counted array with a helper. */
struct Rec13 {
    char pad0[0x34];
};

struct Obj13 {
    char pad0[4];
    struct Rec13 *p4;
    char pad1[0x3C - 0x08];
    unsigned char b3C;
};

void func_1DE148(struct Rec13 *r);

void func_1DE270(struct Obj13 *a0)
{
    struct Rec13 *s0;
    struct Rec13 *s1;

    s0 = a0->p4;
    s1 = s0 + a0->b3C;
    while (s0 != s1) {
        func_1DE148(s0);
        s0++;
    }
}
