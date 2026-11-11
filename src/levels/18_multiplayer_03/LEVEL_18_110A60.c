void func_110AF0(int *);

void func_110A60(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_110AF0(p);
}
