extern int func_0A2010(const int *);
extern void func_0A20D8(int *, short, short);

void func_0A1FC0(int *object, int value)
{
    int current = func_0A2010(object);
    short half = (short)((current - value) / 2);
    func_0A20D8(object, 0, half);
}
