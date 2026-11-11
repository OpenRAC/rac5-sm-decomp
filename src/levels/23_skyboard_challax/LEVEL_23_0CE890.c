extern char *D_001FE828;

void func_0CF028(int *);

int func_0CE890(void)
{
    char *p = D_001FE828 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0CF028((int *)p);
    return 1;
}
