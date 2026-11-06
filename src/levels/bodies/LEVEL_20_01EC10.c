extern int func_01F8D0(void);
extern void func_01EBB0(long long, int, long long);

void func_01EC10(long long first, long long second)
{
    int value = func_01F8D0();
    func_01EBB0(first, value + 1, second);
}
