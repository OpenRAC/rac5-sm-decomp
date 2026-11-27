extern int func_025B58(int, int);
extern void func_024CE8(long long, int, long long);

void func_024D40(long long first, long long second)
{
    int value = ((int (*)(void))func_025B58)();
    func_024CE8(first, value + 1, second);
}
