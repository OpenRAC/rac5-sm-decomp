extern char *D_00165D70;
extern void func_07F7C8(int, int, int, int, int, int, int, int);

void func_07DF50(int a, int b, int c, int d)
{
    char *record = D_00165D70;
    func_07F7C8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
