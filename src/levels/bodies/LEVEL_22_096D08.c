extern int func_096CF0(const void *);
extern void func_096E70(void *, int, int);

void func_096D08(void *state, int previous)
{
    int delta = func_096CF0(state) - previous;
    short half = delta / 2;
    func_096E70(state, half, 0);
}
