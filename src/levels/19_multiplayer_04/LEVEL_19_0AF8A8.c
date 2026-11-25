extern int func_10F9D0(int);
extern void func_0C5F20(int, int, int, int);

void func_0AF8A8(int a)
{
    int first = func_10F9D0(a);
    int second = func_10F9D0(0x30b);
    int third = func_10F9D0(0x218);
    func_0C5F20(3, first, second, third);
}
