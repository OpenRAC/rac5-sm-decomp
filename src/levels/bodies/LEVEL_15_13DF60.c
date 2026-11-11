/* LEVEL_15:0x13DF60 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_0013D898[];
extern void func_07A808(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_07AAA0(char *buf);
extern int func_07A9E0(char *buf);

int func_13DF60(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_07A808(buf, v & 0xFFFFFFFCU, D_0013D898, 0x28, 0, -1, 0);
    r = func_07AAA0(buf);
    if (r != -1) {
        return r;
    }
    return func_07A9E0(buf);
}
