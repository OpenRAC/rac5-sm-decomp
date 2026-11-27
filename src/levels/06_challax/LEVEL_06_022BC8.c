extern int func_0239E0(int, int);
extern void func_022B70(long long, int, long long);

void func_022BC8(long long first, long long second)
{
    int value = ((int (*)(void))func_0239E0)();
    func_022B70(first, value + 1, second);
}
