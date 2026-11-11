extern int func_022C28(void);
extern int func_021EB0(unsigned int a0, unsigned int a1, int a2);

void func_021F10(unsigned int first, int second)
{
    int value = func_022C28();
    func_021EB0(first, value + 1, second);
}
