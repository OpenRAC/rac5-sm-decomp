extern long long func_123C28(int);
extern void func_0CDD80(int, long long, long long, long long);

void func_0B78B8(int a)
{
    long long first = func_123C28(a);
    long long second = func_123C28(0x30b);
    long long third = func_123C28(0x218);
    func_0CDD80(3, first, second, third);
}
