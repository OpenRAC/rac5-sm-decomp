/* LEVEL_22:0x14DC60 -- placement copy of FRONTEND_0268E0.c. */
extern char D_0017D218[];

struct tag_0268E0
{
    int f0;
    int f4;
    int f8;
};

void func_14DC60(struct tag_0268E0 *p, int a, int b)
{
    if (p)
    {
        p->f8 = b;
        p->f0 = a;
        p->f4 = (int)D_0017D218;
    }
}
