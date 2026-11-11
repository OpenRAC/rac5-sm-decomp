extern unsigned int func_021D98(int, int);
extern void func_021E10(int, int, int);

int func_022CF8(unsigned int value)
{
    unsigned int previous = func_021D98(0x89, 0xff);
    if (value > previous)
        return 0;
    func_021E10(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
