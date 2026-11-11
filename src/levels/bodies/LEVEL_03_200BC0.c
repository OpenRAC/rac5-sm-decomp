/* LEVEL_03:0x200BC0 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_002004C0[];
extern void func_096578(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_096810(char *buf);
extern int func_096750(char *buf);

int func_200BC0(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_096578(buf, v & 0xFFFFFFFCU, D_002004C0, 0x28, 0, -1, 0);
    r = func_096810(buf);
    if (r != -1) {
        return r;
    }
    return func_096750(buf);
}
