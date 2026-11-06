extern void func_078D18(long long);
extern long long func_078F38(long long);

long long func_078F80(long long first, long long second)
{
    long long value;
    func_078D18(second);
    value = func_078F38(first);
    func_078D18(0);
    return value;
}
