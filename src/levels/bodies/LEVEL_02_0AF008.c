extern int func_0AEFF0(const void *);
extern void func_0AF170(void *, int, int);

void func_0AF008(void *state, int previous)
{
    int delta = func_0AEFF0(state) - previous;
    short half = delta / 2;
    func_0AF170(state, half, 0);
}
