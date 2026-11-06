extern unsigned int func_024A50(int, int);
extern void func_024AC8(int, int, int);

int func_025BD8(unsigned int value)
{
    unsigned int previous = func_024A50(0x89, 0xff);
    if (value > previous)
        return 0;
    func_024AC8(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
