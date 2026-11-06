extern unsigned int func_027BF0(int, int);
extern void func_027C68(int, int, int);

int func_028CF8(unsigned int value)
{
    unsigned int previous = func_027BF0(0x89, 0xff);
    if (value > previous)
        return 0;
    func_027C68(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
