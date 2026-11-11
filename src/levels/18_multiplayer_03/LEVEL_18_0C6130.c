extern char *D_001E0428;

void func_0C68C8(int *);

int func_0C6130(void)
{
    char *p = D_001E0428 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0C68C8((int *)p);
    return 1;
}
