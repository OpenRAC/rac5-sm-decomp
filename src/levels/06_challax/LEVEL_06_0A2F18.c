extern int func_0A2F68(const int *);
extern void func_0A3030(int *, short, short);

void func_0A2F18(int *object, int value)
{
    int current = func_0A2F68(object);
    short half = (short)((current - value) / 2);
    func_0A3030(object, 0, half);
}
