extern int func_095E38(const int *);
extern void func_095F30(int *, short, short);

void func_095DE8(int *object, int value)
{
    int current = func_095E38(object);
    short half = (short)((current - value) / 2);
    func_095F30(object, 0, half);
}
