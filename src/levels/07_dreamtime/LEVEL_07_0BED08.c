void func_1FF6F8(int *, unsigned int);

void func_0BED08(int *p, unsigned int flag)
{
    if (flag & 1)
        func_1FF6F8(p, flag & 1);
}
