extern int func_0AA6E0(const void *);
extern void func_0AA860(void *, int, int);

void func_0AA6F8(void *state, int previous)
{
    int delta = func_0AA6E0(state) - previous;
    short half = delta / 2;
    func_0AA860(state, half, 0);
}
