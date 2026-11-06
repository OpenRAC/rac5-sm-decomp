extern char *D_001D7A10;
extern void func_0877F8(int, int, int, int, int, int, int, int);

void func_085F80(int a, int b, int c, int d)
{
    char *record = D_001D7A10;
    func_0877F8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
