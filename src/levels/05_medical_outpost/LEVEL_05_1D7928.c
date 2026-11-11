/* LEVEL_05:0x1D7928 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_001D7228[];
extern void func_094040(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_0942D8(char *buf);
extern int func_094218(char *buf);

int func_1D7928(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_094040(buf, v & 0xFFFFFFFCU, D_001D7228, 0x28, 0, -1, 0);
    r = func_0942D8(buf);
    if (r != -1) {
        return r;
    }
    return func_094218(buf);
}
