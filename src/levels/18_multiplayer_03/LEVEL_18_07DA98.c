extern char *D_001B5D20;
extern void func_07F310(int, int, int, int, int, int, int, int);

void func_07DA98(int a, int b, int c, int d)
{
    char *record = D_001B5D20;
    func_07F310(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
