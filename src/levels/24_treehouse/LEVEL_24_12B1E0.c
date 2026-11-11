void func_12B270(int *);

void func_12B1E0(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_12B270(p);
}
