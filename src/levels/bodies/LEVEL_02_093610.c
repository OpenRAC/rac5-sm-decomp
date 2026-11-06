extern char *D_0021BD50;
extern void func_094E88(int, int, int, int, int, int, int, int);

void func_093610(int a, int b, int c, int d)
{
    char *record = D_0021BD50;
    func_094E88(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
