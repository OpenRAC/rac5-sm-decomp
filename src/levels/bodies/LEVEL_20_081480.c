extern int func_081468(const void *);
extern void func_081618(void *, int, int);

void func_081480(void *state, int previous)
{
    int delta = func_081468(state) - previous;
    short half = delta / 2;
    func_081618(state, half, 0);
}
