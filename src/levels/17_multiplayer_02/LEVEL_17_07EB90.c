extern char *D_001A7EA0;
extern void func_080408(int, int, int, int, int, int, int, int);

void func_07EB90(int a, int b, int c, int d)
{
    char *record = D_001A7EA0;
    func_080408(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
