/* LEVEL_10:0x1F7900 -- placement copy of FRONTEND_0268E0.c. */
extern char D_002349E8[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_1F7900(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_002349E8;
    }
}
