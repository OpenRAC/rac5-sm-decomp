extern int func_01F5E8(void);
extern void func_01E7D0(long long, int, long long);

void func_01E828(long long first, long long second)
{
    int value = func_01F5E8();
    func_01E7D0(first, value + 1, second);
}
