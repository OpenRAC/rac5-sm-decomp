extern int func_025C38(int, int);
extern void func_024DC8(long long, int, long long);

void func_024E20(long long first, long long second)
{
    int value = ((int (*)(void))func_025C38)();
    func_024DC8(first, value + 1, second);
}
