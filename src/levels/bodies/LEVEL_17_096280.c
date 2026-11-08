extern int func_096268(const void *);
extern void func_096418(void *, int, int);

void func_096280(void *state, int previous)
{
    int delta = func_096268(state) - previous;
    short half = delta / 2;
    func_096418(state, half, 0);
}
