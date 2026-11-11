extern int func_089060(const int *);
extern void func_089128(int *, short, short);

void func_089010(int *object, int value)
{
    int current = func_089060(object);
    short half = (short)((current - value) / 2);
    func_089128(object, 0, half);
}
