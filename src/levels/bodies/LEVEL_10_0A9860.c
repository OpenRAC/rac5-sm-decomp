extern int func_0A98B0(const int *);
extern void func_0A9978(int *, short, short);

void func_0A9860(int *object, int value)
{
    int current = func_0A98B0(object);
    short half = (short)((current - value) / 2);
    func_0A9978(object, 0, half);
}
