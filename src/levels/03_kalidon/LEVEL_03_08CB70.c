extern char *D_0021F410;
extern void func_08E3E8(int, int, int, int, int, int, int, int);

void func_08CB70(int a, int b, int c, int d)
{
    char *record = D_0021F410;
    func_08E3E8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
