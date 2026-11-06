extern unsigned int func_021A20(int, int);
extern void func_021A98(int, int, int);

int func_022B50(unsigned int value)
{
    unsigned int previous = func_021A20(0x89, 0xff);
    if (value > previous)
        return 0;
    func_021A98(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
