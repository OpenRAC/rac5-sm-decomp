extern char *D_002201B0;
extern void func_0918B0(int, int, int, int, int, int, int, int);

void func_090038(int a, int b, int c, int d)
{
    char *record = D_002201B0;
    func_0918B0(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
