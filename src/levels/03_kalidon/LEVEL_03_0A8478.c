extern int func_0A8460(const void *);
extern void func_0A85E0(void *, int, int);

void func_0A8478(void *state, int previous)
{
    int delta = func_0A8460(state) - previous;
    short half = delta / 2;
    func_0A85E0(state, half, 0);
}
