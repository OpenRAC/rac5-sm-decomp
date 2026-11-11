/* LEVEL_15:0x0FB1D0 -- masks a flag word, passes it with a stack buffer to a helper, then hands the buffer to a second helper and returns its result. */

extern char D_000FA810[];

extern void func_07A808(void *rec, unsigned int mode, void *tab, int n, int a4, int a5, int a6);
int func_07A9E0(void *buf);

int func_0FB1D0(unsigned int a0)
{
    char buf[16];
    unsigned int flags;

    flags = (a0 & ~0x3C) | 4;
    func_07A808(buf, flags & ~3, D_000FA810, 0x30, 0, -1, 0);
    return func_07A9E0(buf);
}
