extern int func_022C28(void);
extern void func_021EB0(long long, int, long long);

void func_021F10(long long first, long long second)
{
    int value = func_022C28();
    func_021EB0(first, value + 1, second);
}
