extern void func_067008(long long);
extern long long func_067228(long long);

long long func_067270(long long first, long long second)
{
    long long value;
    func_067008(second);
    value = func_067228(first);
    func_067008(0);
    return value;
}
