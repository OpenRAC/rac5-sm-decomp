extern int func_0B2FD8(const void *);
extern void func_0B3158(void *, int, int);

void func_0B2FF0(void *state, int previous)
{
    int delta = func_0B2FD8(state) - previous;
    short half = delta / 2;
    func_0B3158(state, half, 0);
}
