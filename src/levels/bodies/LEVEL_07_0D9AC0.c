extern char *D_00246CA8;

void func_0DA258(int *);

int func_0D9AC0(void)
{
    char *p = D_00246CA8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0DA258((int *)p);
    return 1;
}
