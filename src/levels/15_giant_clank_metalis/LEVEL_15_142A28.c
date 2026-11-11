extern char D_00173578[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_142A28(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_00173578;
    }
}
