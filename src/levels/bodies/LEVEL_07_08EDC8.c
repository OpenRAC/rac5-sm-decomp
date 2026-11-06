extern char *D_0021B090;
extern void func_090640(int, int, int, int, int, int, int, int);

void func_08EDC8(int a, int b, int c, int d)
{
    char *record = D_0021B090;
    func_090640(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
