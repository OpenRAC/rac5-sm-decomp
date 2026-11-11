/* LEVEL_23:0x1C1CE8 -- placement copy of FRONTEND_0268E0.c. */
extern char D_001F8AA8[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_1C1CE8(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_001F8AA8;
    }
}
