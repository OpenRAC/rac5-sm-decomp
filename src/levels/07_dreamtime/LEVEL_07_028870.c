extern unsigned int func_027768(int, int);
extern void func_0277E0(int, int, int);

int func_028870(unsigned int value)
{
    unsigned int previous = func_027768(0x89, 0xff);
    if (value > previous)
        return 0;
    func_0277E0(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
