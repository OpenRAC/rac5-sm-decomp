extern char D_0017D038[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_14D0E8(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_0017D038;
    }
}
