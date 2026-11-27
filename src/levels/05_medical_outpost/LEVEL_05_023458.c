extern int func_024270(int, int);
extern void func_023400(long long, int, long long);

void func_023458(long long first, long long second)
{
    int value = ((int (*)(void))func_024270)();
    func_023400(first, value + 1, second);
}
