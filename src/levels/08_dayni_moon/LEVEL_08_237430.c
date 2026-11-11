/* LEVEL_08:0x237430 -- placement copy of FRONTEND_0268E0.c. */
extern char D_0027A8A8[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_237430(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_0027A8A8;
    }
}
