extern char *D_001F5990;
extern void func_087408(int, int, int, int, int, int, int, int);

void func_085B90(int a, int b, int c, int d)
{
    char *record = D_001F5990;
    func_087408(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
