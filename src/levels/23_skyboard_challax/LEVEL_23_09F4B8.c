extern int func_09F508(const int *);
extern void func_09F5D0(int *, short, short);

void func_09F4B8(int *object, int value)
{
    int current = func_09F508(object);
    short half = (short)((current - value) / 2);
    func_09F5D0(object, 0, half);
}
