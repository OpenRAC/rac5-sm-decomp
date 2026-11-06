extern int func_0200B8(void);
extern void func_01F2A0(long long, int, long long);

void func_01F2F8(long long first, long long second)
{
    int value = func_0200B8();
    func_01F2A0(first, value + 1, second);
}
