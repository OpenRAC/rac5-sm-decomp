extern unsigned int func_026148(int, int);
extern void func_0261C0(int, int, int);

int func_027328(unsigned int value)
{
    unsigned int previous = func_026148(0x89, 0xff);
    if (value > previous)
        return 0;
    func_0261C0(0x89, (previous - value) & 0xff, 0xff);
    return 1;
}
