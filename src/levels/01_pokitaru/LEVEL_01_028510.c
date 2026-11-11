extern unsigned int func_027408(int, int);
extern void func_027480(int, int, int);

int func_028510(unsigned int value)
{
    unsigned int previous = func_027408(0x89, 0xff);
    if (value > previous)
        return 0;
    func_027480(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
