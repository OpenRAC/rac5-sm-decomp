extern char *D_001E0228;

void func_0C71C8(int *);

int func_0C6A30(void)
{
    char *p = D_001E0228 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0C71C8((int *)p);
    return 1;
}
