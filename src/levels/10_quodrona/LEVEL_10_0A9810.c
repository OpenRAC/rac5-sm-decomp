extern int func_0A97F8(const void *);
extern void func_0A9978(void *, int, int);

void func_0A9810(void *state, int previous)
{
    int delta = func_0A97F8(state) - previous;
    short half = delta / 2;
    func_0A9978(state, half, 0);
}
