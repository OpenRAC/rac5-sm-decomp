extern int func_096320(const int *);
extern void func_096418(int *, short, short);

void func_0962D0(int *object, int value)
{
    int current = func_096320(object);
    short half = (short)((current - value) / 2);
    func_096418(object, 0, half);
}
