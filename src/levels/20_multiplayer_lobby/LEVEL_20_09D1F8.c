extern long long func_07FDB8(int);
extern void func_0E3930(int, void *, long long);
extern void func_0E3BC8(int, int);
extern char D_00128B18[];
extern char *D_00104194;

void func_09D1F8(void)
{
    long long value = func_07FDB8(0);
    func_0E3930(0, D_00128B18, value);
    func_0E3BC8(0, *(int *)(D_00104194 + 0x3c) + 1);
}
