extern unsigned int func_024EA8(int, int);
extern void func_024F20(int, int, int);

int func_026030(unsigned int value)
{
    unsigned int previous = func_024EA8(0x89, 0xff);
    if (value > previous)
        return 0;
    func_024F20(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
