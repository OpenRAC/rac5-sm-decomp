extern int func_0A1F58(const void *);
extern void func_0A20D8(void *, int, int);

void func_0A1F70(void *state, int previous)
{
    int delta = func_0A1F58(state) - previous;
    short half = delta / 2;
    func_0A20D8(state, half, 0);
}
