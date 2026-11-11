extern int func_095D80(const void *);
extern void func_095F30(void *, int, int);

void func_095D98(void *state, int previous)
{
    int delta = func_095D80(state) - previous;
    short half = delta / 2;
    func_095F30(state, half, 0);
}
