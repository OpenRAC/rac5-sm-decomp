extern char *D_0024FC50;
extern void func_0966D8(int, int, int, int, int, int, int, int);

void func_094E60(int a, int b, int c, int d)
{
    char *record = D_0024FC50;
    func_0966D8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
