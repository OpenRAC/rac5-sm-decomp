void func_0F4638(int *);

void func_0F45A8(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_0F4638(p);
}
