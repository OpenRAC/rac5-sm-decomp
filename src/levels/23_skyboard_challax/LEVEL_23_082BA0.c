extern char *D_001DA190;
extern void func_084418(int, int, int, int, int, int, int, int);

void func_082BA0(int a, int b, int c, int d)
{
    char *record = D_001DA190;
    func_084418(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
