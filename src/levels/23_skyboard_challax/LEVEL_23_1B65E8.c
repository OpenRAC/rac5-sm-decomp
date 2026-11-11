/* LEVEL_23:0x1B65E8 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_001B5EE8[];
extern void func_08C368(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_08C600(char *buf);
extern int func_08C540(char *buf);

int func_1B65E8(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_08C368(buf, v & 0xFFFFFFFCU, D_001B5EE8, 0x28, 0, -1, 0);
    r = func_08C600(buf);
    if (r != -1) {
        return r;
    }
    return func_08C540(buf);
}
