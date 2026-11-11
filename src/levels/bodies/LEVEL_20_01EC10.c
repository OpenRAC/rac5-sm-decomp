extern int func_01F8D0(void);
extern int func_01EBB0(unsigned int a0, unsigned int a1, int a2);

void func_01EC10(unsigned int first, int second)
{
    int value = func_01F8D0();
    func_01EBB0(first, value + 1, second);
}
