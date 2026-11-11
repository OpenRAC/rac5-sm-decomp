extern void func_079880(int);
extern unsigned int func_079AA0(int value);

unsigned int func_079AE8(int first, int second)
{
    unsigned int value;
    func_079880(second);
    value = func_079AA0(first);
    func_079880(0);
    return value;
}
