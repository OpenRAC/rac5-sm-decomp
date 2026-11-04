void func_141BF0(int *);

void func_141B60(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_141BF0(p);
}
