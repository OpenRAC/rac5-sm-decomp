/* LEVEL_01:0x1EE8A8 -- placement copy of FRONTEND_0268E0.c. */
extern char D_0022B628[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_1EE8A8(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_0022B628;
    }
}
