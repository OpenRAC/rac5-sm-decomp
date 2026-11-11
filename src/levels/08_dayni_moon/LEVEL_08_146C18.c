void func_146CA8(int *);

void func_146C18(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_146CA8(p);
}
