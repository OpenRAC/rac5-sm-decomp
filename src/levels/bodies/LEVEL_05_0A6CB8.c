extern int func_0A6CA0(const void *);
extern void func_0A6E20(void *, int, int);

void func_0A6CB8(void *state, int previous)
{
    int delta = func_0A6CA0(state) - previous;
    short half = delta / 2;
    func_0A6E20(state, half, 0);
}
