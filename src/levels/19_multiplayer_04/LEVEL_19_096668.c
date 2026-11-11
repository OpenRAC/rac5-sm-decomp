extern int func_0966B8(const int *);
extern void func_0967B0(int *, short, short);

void func_096668(int *object, int value)
{
    int current = func_0966B8(object);
    short half = (short)((current - value) / 2);
    func_0967B0(object, 0, half);
}
