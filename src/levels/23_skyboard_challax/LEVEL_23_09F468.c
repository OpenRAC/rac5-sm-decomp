extern int func_09F450(const void *);
extern void func_09F5D0(void *, int, int);

void func_09F468(void *state, int previous)
{
    int delta = func_09F450(state) - previous;
    short half = delta / 2;
    func_09F5D0(state, half, 0);
}
