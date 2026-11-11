extern unsigned int func_026CE8(int, int);
extern void func_026D60(int, int, int);

int func_027E18(unsigned int value)
{
    unsigned int previous = func_026CE8(0x89, 0xff);
    if (value > previous)
        return 0;
    func_026D60(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
