extern int func_081520(const int *);
extern void func_081618(int *, short, short);

void func_0814D0(int *object, int value)
{
    int current = func_081520(object);
    short half = (short)((current - value) / 2);
    func_081618(object, 0, half);
}
