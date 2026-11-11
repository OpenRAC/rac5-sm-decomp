extern unsigned int func_0272E8(int, int);
extern void func_027360(int, int, int);

int func_0283F0(unsigned int value)
{
    unsigned int previous = func_0272E8(0x89, 0xff);
    if (value > previous)
        return 0;
    func_027360(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
