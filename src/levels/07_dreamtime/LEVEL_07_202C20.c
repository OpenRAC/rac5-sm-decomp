/* LEVEL_07:0x202C20 -- placement copy of FRONTEND_0268E0.c. */
extern char D_00240F08[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_202C20(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_00240F08;
    }
}
