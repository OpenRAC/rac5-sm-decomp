/* LEVEL_09:0x1D8730 -- placement copy of LEVEL_01_1EE8C8.c: fills a four-word record with the given values and a fixed table pointer when the record exists. */
extern char D_00212D88[];

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
        p->f4 = (int)D_00212D88;
    }
}
