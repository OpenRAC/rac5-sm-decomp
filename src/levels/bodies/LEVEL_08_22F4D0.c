/* LEVEL_08:0x22F4D0 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_0022EDD0[];
extern void func_09E868(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_09EB00(char *buf);
extern int func_09EA40(char *buf);

int func_22F4D0(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_09E868(buf, v & 0xFFFFFFFCU, D_0022EDD0, 0x28, 0, -1, 0);
    r = func_09EB00(buf);
    if (r != -1) {
        return r;
    }
    return func_09EA40(buf);
}
