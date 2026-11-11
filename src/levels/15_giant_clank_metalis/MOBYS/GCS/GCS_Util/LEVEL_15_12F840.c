/* LEVEL_15:0x12F840 -- stores a helper result for a scaled count and the raw count into the output record. */

extern int func_0D4FE0(int size, int zero, void *tbl, int n);
extern unsigned char D_00171500[];

struct Out {
    int w00;
    int w04;
};

struct In {
    unsigned char pad00[0x14];
    unsigned short h14;
};

void func_12F840(struct Out *o, struct In *in)
{
    unsigned short n;

    n = in->h14;
    o->w00 = func_0D4FE0(n * 56, 0, D_00171500, 11);
    o->w04 = n;
}
