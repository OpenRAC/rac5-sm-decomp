extern int func_096E28(const int *);
extern void func_096F20(int *, short, short);

void func_096DD8(int *object, int value)
{
    int current = func_096E28(object);
    short half = (short)((current - value) / 2);
    func_096F20(object, 0, half);
}
