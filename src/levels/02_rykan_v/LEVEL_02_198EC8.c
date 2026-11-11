/* LEVEL_02:0x198EC8 -- placement copy of LEVEL_01_182F38.c: clears a field and forwards a value to a helper when it holds 0x5C. */

struct Mid182F38 {
    struct Inner182F38 *p00;
};

struct Outer182F38 {
    char pad00[0x58];
    struct Mid182F38 *p58;
};

struct Inner182F38 {
    char pad000[0x36C];
    int f36C;
    char pad370[0x59C - 0x370];
    int f59C;
};

extern void func_0835F8(int a, int b, int c, int d, float e, float f);

void func_198EC8(struct Outer182F38 *o)
{
    struct Inner182F38 *in;

    in = o->p58->p00;
    if (in->f36C == 0x5C) {
        in->f36C = 0;
        func_0835F8(in->f59C, 0, 0, 1, 0.3f, 0.0f);
    }
}
