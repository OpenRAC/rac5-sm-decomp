extern unsigned int func_024828(int, int);
extern void func_0248A0(int, int, int);

int func_0259B0(unsigned int value)
{
    unsigned int previous = func_024828(0x89, 0xff);
    if (value > previous)
        return 0;
    func_0248A0(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
