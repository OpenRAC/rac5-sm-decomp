extern int func_023058(int, int);
extern void func_022240(long long, int, long long);

void func_022298(long long first, long long second)
{
    int value = ((int (*)(void))func_023058)();
    func_022240(first, value + 1, second);
}
