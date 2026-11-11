extern unsigned int func_024458(int, int);
extern void func_0244D0(int, int, int);

int func_0255E0(unsigned int value)
{
    unsigned int previous = func_024458(0x89, 0xff);
    if (value > previous)
        return 0;
    func_0244D0(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
