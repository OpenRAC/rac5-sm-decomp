extern char *D_001E00A8;

void func_0C78F0(int *);

int func_0C7158(void)
{
    char *p = D_001E00A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0C78F0((int *)p);
    return 1;
}
