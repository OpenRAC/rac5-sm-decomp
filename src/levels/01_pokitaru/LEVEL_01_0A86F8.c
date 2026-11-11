/* LEVEL_01:0x0A86F8 -- placement copy of LEVEL_02_0AF008.c. */
extern int func_0A86E0(const void *);
extern void func_0A8860(void *, int, int);

void func_0A86F8(void *state, int previous)
{
    int delta = func_0A86E0(state) - previous;
    short half = delta / 2;
    func_0A8860(state, half, 0);
}
