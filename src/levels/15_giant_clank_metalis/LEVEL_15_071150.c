extern char *D_0015B710;
extern void func_0729C8(int, int, int, int, int, int, int, int);

void func_071150(int a, int b, int c, int d)
{
    char *record = D_0015B710;
    func_0729C8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
