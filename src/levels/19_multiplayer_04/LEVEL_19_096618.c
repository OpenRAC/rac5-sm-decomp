extern int func_096600(const void *);
extern void func_0967B0(void *, int, int);

void func_096618(void *state, int previous)
{
    int delta = func_096600(state) - previous;
    short half = delta / 2;
    func_0967B0(state, half, 0);
}
