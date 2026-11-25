extern int func_10F330(int);
extern void func_0C6648(int, int, int, int);

void func_0AFFD0(int a)
{
    int first = func_10F330(a);
    int second = func_10F330(0x30b);
    int third = func_10F330(0x218);
    func_0C6648(3, first, second, third);
}
