extern char *D_0021D0A8;

void func_0D67A0(int *);

int func_0D6008(void)
{
    char *p = D_0021D0A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D67A0((int *)p);
    return 1;
}
