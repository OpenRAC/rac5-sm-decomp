extern char *D_00116F80;
extern void func_06D550(int, int, int, int, int, int, int, int);

void func_06BCD8(int a, int b, int c, int d)
{
    char *record = D_00116F80;
    func_06D550(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
