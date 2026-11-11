void func_1BC058(int *, unsigned int);

void func_0B6570(int *p, unsigned int flag)
{
    if (flag & 1)
        func_1BC058(p, flag & 1);
}
