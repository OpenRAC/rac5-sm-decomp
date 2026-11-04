extern char *D_00280628;

void func_0E31C8(int *);

int func_0E2A30(void)
{
    char *p = D_00280628 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0E31C8((int *)p);
    return 1;
}
