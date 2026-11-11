/* LEVEL_15:0x11C0D0 -- masks and sets bit fields of its argument, then calls two helpers with a local buffer. */

extern void func_07A808(void *buf, unsigned int v, int tab, int n, int a, int b, int c);
extern int func_07A9E0(void *buf);
extern char D_0011B278[];

int func_11C0D0(unsigned int flags)
{
    unsigned char buf[16];
    unsigned int v;

    v = (flags & ~0x3CU) | 4U;
    func_07A808(buf, v & ~3U, (int)D_0011B278, 0x38, 0, 2, 0);
    return func_07A9E0(buf);
}
