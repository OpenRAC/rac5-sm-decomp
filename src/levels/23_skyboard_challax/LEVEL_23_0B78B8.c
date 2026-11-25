extern int func_123C28(int);
extern void func_0CDD80(int, int, int, int);

void func_0B78B8(int a)
{
    int first = func_123C28(a);
    int second = func_123C28(0x30b);
    int third = func_123C28(0x218);
    func_0CDD80(3, first, second, third);
}
