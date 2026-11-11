extern int func_0A5A48(const int *);
extern void func_0A5B10(int *, short, short);

void func_0A59F8(int *object, int value)
{
    int current = func_0A5A48(object);
    short half = (short)((current - value) / 2);
    func_0A5B10(object, 0, half);
}
