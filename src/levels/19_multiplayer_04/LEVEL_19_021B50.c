extern int func_022868(void);
extern int func_021AF0(unsigned int a0, unsigned int a1, int a2);

void func_021B50(unsigned int first, int second)
{
    int value = func_022868();
    func_021AF0(first, value + 1, second);
}
