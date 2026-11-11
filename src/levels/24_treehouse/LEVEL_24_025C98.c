extern unsigned int func_024D38(int, int);
extern void func_024DB0(int, int, int);

int func_025C98(unsigned int value)
{
    unsigned int previous = func_024D38(0x89, 0xff);
    if (value > previous)
        return 0;
    func_024DB0(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
