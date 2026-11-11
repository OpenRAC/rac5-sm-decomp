/* LEVEL_06:0x1DD7F0 -- placement copy of FRONTEND_0268E0.c. */
extern char D_00218378[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_1DD7F0(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_00218378;
    }
}
