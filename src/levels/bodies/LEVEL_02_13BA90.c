void func_13BB20(int *);

void func_13BA90(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_13BB20(p);
}
