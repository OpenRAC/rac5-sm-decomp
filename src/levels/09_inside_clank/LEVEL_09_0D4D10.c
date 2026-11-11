extern char *D_00218B28;

void func_0D54A8(int *);

int func_0D4D10(void)
{
    char *p = D_00218B28 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D54A8((int *)p);
    return 1;
}
