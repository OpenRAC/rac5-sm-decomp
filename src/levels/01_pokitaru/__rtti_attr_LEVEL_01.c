/* LEVEL_01:0x1EE8C8 -- fills a four-word record with the given values and a fixed table pointer when the record exists. */
extern char D_0022B618[];

struct Rec {
    int f0;
    int f4;
    int f8;
    int fC;
};

void __rtti_attr(struct Rec *p, int a, int b, int c)
{
    if (p)
    {
        p->fC = b;
        p->f0 = a;
        p->f8 = c;
        p->f4 = (int)D_0022B618;
    }
}
