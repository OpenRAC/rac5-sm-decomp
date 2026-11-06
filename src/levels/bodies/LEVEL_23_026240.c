extern unsigned int func_025160(int, int);
extern void func_0251D8(int, int, int);

int func_026240(unsigned int value)
{
    unsigned int previous = func_025160(0x89, 0xff);
    if (value > previous)
        return 0;
    func_0251D8(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
