/* LEVEL_09:0x1D7B70 -- placement copy of LEVEL_01_1EDD08.c: initialises a four-word record when given one. */
extern char D_00212BA0[];

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
        p->f4 = (int)D_00212BA0;
    }
}
