extern int func_0AD8F0(const void *);
extern void func_0ADA70(void *, int, int);

void func_0AD908(void *state, int previous)
{
    int delta = func_0AD8F0(state) - previous;
    short half = delta / 2;
    func_0ADA70(state, half, 0);
}
