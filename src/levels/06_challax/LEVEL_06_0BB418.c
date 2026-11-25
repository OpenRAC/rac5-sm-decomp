extern int func_128B80(int);
extern void func_0D1850(int, int, int, int);

void func_0BB418(int a)
{
    int first = func_128B80(a);
    int second = func_128B80(0x30b);
    int third = func_128B80(0x218);
    func_0D1850(3, first, second, third);
}
