extern int func_0A2EB0(const void *);
extern void func_0A3030(void *, int, int);

void func_0A2EC8(void *state, int previous)
{
    int delta = func_0A2EB0(state) - previous;
    short half = delta / 2;
    func_0A3030(state, half, 0);
}
