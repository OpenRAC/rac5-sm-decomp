/* LEVEL_20:0x0FBED8 -- placement copy of LEVEL_01_1EDD08.c: initialises a four-word record when given one. */
extern char D_00131AA0[];

struct Rec {
    int f0;
    int f4;
    int f8;
    int fC;
};

void __rtti_class(struct Rec *p, int a, int b, int c)
{
    if (p) {
        p->fC = c;
        p->f0 = a;
        p->f8 = b;
        p->f4 = (int)D_00131AA0;
    }
}
