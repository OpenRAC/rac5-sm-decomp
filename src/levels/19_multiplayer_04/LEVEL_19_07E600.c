extern char *D_001B5A20;
extern void func_07FE78(int, int, int, int, int, int, int, int);

void func_07E600(int a, int b, int c, int d)
{
    char *record = D_001B5A20;
    func_07FE78(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
