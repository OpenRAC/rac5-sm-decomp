void func_12BE40(int *);

void func_12BDB0(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_12BE40(p);
}
