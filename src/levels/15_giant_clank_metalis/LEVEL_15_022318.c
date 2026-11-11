extern unsigned int func_0213F8(int, int);
extern void func_021470(int, int, int);

int func_022318(unsigned int value)
{
    unsigned int previous = func_0213F8(0x89, 0xff);
    if (value > previous)
        return 0;
    func_021470(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
