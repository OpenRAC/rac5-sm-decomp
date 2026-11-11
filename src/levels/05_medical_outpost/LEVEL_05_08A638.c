extern char *D_001F5E10;
extern void func_08BEB0(int, int, int, int, int, int, int, int);

void func_08A638(int a, int b, int c, int d)
{
    char *record = D_001F5E10;
    func_08BEB0(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
