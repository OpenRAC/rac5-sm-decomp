struct S {
    int f00;
    int f04;
    int f08;
    int f0C;
    unsigned char f10;
};

void func_022988(struct S *p, int v)
{
    p->f08 = v;
    p->f0C = 2;
    p->f10 = 1;
}
