extern char *D_0021E128;

void func_0D2AF8(int *);

int func_0D2360(void)
{
    char *p = D_0021E128 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D2AF8((int *)p);
    return 1;
}
