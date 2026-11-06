extern unsigned int func_027098(int, int);
extern void func_027110(int, int, int);

int func_028178(unsigned int value)
{
    unsigned int previous = func_027098(0x89, 0xff);
    if (value > previous)
        return 0;
    func_027110(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
