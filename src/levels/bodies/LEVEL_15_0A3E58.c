extern long long func_086CA8(int);
extern void func_0F2CA0(int, void *, long long);
extern void func_0F2F38(int, int);
extern char D_001674D8[];
extern char *D_00148C2C;

void func_0A3E58(void)
{
    long long value = func_086CA8(0);
    func_0F2CA0(0, D_001674D8, value);
    func_0F2F38(0, *(int *)(D_00148C2C + 0x3c) + 1);
}
