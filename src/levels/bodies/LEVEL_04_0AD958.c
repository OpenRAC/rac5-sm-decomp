extern int func_0AD9A8(const int *);
extern void func_0ADA70(int *, short, short);

void func_0AD958(int *object, int value)
{
    int current = func_0AD9A8(object);
    short half = (short)((current - value) / 2);
    func_0ADA70(object, 0, half);
}
