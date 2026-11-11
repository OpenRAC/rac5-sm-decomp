extern int func_0A5990(const void *);
extern void func_0A5B10(void *, int, int);

void func_0A59A8(void *state, int previous)
{
    int delta = func_0A5990(state) - previous;
    short half = delta / 2;
    func_0A5B10(state, half, 0);
}
