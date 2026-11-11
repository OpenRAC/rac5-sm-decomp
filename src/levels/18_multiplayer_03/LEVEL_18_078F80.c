extern void func_078D18(int);
extern unsigned int func_078F38(int value);

unsigned int func_078F80(int first, int second)
{
    unsigned int value;
    func_078D18(second);
    value = func_078F38(first);
    func_078D18(0);
    return value;
}
