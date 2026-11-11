extern char *D_001B48A0;
extern void func_07F9C8(int, int, int, int, int, int, int, int);

void func_07E150(int a, int b, int c, int d)
{
    char *record = D_001B48A0;
    func_07F9C8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
