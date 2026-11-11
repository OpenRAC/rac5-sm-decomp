void func_133B38(int *);

void func_133AA8(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_133B38(p);
}
