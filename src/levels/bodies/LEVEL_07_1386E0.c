void func_138770(int *);

void func_1386E0(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_138770(p);
}
