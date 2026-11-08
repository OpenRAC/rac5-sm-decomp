extern int func_0B3090(const int *);
extern void func_0B3158(int *, short, short);

void func_0B3040(int *object, int value)
{
    int current = func_0B3090(object);
    short half = (short)((current - value) / 2);
    func_0B3158(object, 0, half);
}
