extern int func_0AF0A8(const int *);
extern void func_0AF170(int *, short, short);

void func_0AF058(int *object, int value)
{
    int current = func_0AF0A8(object);
    short half = (short)((current - value) / 2);
    func_0AF170(object, 0, half);
}
