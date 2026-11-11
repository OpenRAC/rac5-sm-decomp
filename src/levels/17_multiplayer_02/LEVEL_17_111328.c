void func_1113B8(int *);

void func_111328(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_1113B8(p);
}
