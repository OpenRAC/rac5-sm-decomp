extern int func_096D70(const void *);
extern void func_096F20(void *, int, int);

void func_096D88(void *state, int previous)
{
    int delta = func_096D70(state) - previous;
    short half = delta / 2;
    func_096F20(state, half, 0);
}
