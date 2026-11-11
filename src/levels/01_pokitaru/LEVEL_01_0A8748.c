/* LEVEL_01:0x0A8748 -- placement copy of LEVEL_02_0AF058.c. */
extern int func_0A8798(const int *);
extern void func_0A8860(int *, short, short);

void func_0A8748(int *object, int value)
{
    int current = func_0A8798(object);
    short half = (short)((current - value) / 2);
    func_0A8860(object, 0, half);
}
