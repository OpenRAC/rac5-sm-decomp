extern int D_001ED970;
extern char *D_001C73AC;

void func_0263C0(int);

void func_016110(void)
{
    int v = D_001ED970;

    *(int *)(D_001C73AC + 0x1C6C) = v;
    *(char *)(D_001C73AC + 0x10513) = 0;
    func_0263C0(v);
}
