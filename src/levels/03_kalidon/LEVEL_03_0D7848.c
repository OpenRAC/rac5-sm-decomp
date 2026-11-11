extern char *D_0024C228;

void func_0D7FE0(int *);

int func_0D7848(void)
{
    char *p = D_0024C228 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D7FE0((int *)p);
    return 1;
}
