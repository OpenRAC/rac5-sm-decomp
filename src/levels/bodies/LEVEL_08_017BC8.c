extern int D_00264470;
extern char *D_0023CB2C;

void func_028D80(int);

void func_017BC8(void)
{
    int v = D_00264470;

    *(int *)(D_0023CB2C + 0x1C6C) = v;
    *(char *)(D_0023CB2C + 0x10513) = 0;
    func_028D80(v);
}
