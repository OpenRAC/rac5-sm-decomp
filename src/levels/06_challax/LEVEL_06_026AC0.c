extern unsigned int func_0258B8(int, int);
extern void func_025930(int, int, int);

int func_026AC0(unsigned int value)
{
    unsigned int previous = func_0258B8(0x89, 0xff);
    if (value > previous)
        return 0;
    func_025930(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
