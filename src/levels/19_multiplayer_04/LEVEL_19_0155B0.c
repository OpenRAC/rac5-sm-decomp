extern int D_001D16A0;
extern char *D_001A2C34;

void func_025CB0(int);

void func_0155B0(void)
{
    int v = D_001D16A0;

    *(int *)(D_001A2C34 + 0x1C6C) = v;
    *(char *)(D_001A2C34 + 0x10513) = 0;
    func_025CB0(v);
}
