extern int func_088FA8(const void *);
extern void func_089128(void *, int, int);

void func_088FC0(void *state, int previous)
{
    int delta = func_088FA8(state) - previous;
    short half = delta / 2;
    func_089128(state, half, 0);
}
