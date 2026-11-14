/* LEVEL_01:0x1EDD08 -- initialises a four-word record when given one. */
extern char D_0022B430[];

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
        p->f4 = (int)D_0022B430;
    }
}
