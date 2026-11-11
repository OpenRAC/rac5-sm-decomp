extern int func_0A8518(const int *);
extern void func_0A85E0(int *, short, short);

void func_0A84C8(int *object, int value)
{
    int current = func_0A8518(object);
    short half = (short)((current - value) / 2);
    func_0A85E0(object, 0, half);
}
