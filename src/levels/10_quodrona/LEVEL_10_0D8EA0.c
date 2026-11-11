extern char *D_0023A7A8;

void func_0D9638(int *);

int func_0D8EA0(void)
{
    char *p = D_0023A7A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D9638((int *)p);
    return 1;
}
