void func_10CC40(int *);

void func_10CBB0(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_10CC40(p);
}
