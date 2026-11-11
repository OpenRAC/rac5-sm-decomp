extern char *D_00206D90;
extern void func_08E7B8(int, int, int, int, int, int, int, int);

void func_08CF40(int a, int b, int c, int d)
{
    char *record = D_00206D90;
    func_08E7B8(a, b, c, d, *(int *)(record + 0x10),
               *(int *)(record + 0xc), *(int *)(record + 8),
               *(int *)(record + 4));
}
