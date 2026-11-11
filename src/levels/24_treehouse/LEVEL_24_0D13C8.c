extern char *D_001FD2A8;

void func_0D1B60(int *);

int func_0D13C8(void)
{
    char *p = D_001FD2A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D1B60((int *)p);
    return 1;
}
