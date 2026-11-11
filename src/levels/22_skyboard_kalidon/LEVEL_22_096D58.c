extern int func_096DA8(const int *);
extern void func_096E70(int *, short, short);

void func_096D58(int *object, int value)
{
    int current = func_096DA8(object);
    short half = (short)((current - value) / 2);
    func_096E70(object, 0, half);
}
