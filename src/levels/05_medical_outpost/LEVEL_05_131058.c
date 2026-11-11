void func_1310E8(int *);

void func_131058(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_1310E8(p);
}
