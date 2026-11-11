extern char *D_0024BBA8;

void func_0DDAB8(int *);

int func_0DD320(void)
{
    char *p = D_0024BBA8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0DDAB8((int *)p);
    return 1;
}
