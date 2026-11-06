extern char *D_001F0890;
extern void func_08AF10(int, int, int, int, int, int, int, int);

void func_089698(int a, int b, int c, int d)
{
    char *record = D_001F0890;
    func_08AF10(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
