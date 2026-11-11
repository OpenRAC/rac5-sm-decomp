extern char *D_0020F9F0;
extern void func_08EB28(int, int, int, int, int, int, int, int);

void func_08D2B0(int a, int b, int c, int d)
{
    char *record = D_0020F9F0;
    func_08EB28(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
