void func_12E708(int *);

void func_12E678(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_12E708(p);
}
