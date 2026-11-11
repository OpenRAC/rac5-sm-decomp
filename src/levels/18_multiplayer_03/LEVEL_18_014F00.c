extern int D_001D1A20;
extern char *D_001A2F34;

void func_0256B8(int);

void func_014F00(void)
{
    int v = D_001D1A20;

    *(int *)(D_001A2F34 + 0x1C6C) = v;
    *(char *)(D_001A2F34 + 0x10513) = 0;
    func_0256B8(v);
}
