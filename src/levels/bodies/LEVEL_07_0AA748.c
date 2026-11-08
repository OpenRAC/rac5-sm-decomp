extern int func_0AA798(const int *);
extern void func_0AA860(int *, short, short);

void func_0AA748(int *object, int value)
{
    int current = func_0AA798(object);
    short half = (short)((current - value) / 2);
    func_0AA860(object, 0, half);
}
