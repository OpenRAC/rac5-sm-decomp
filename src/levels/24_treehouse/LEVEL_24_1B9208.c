/* LEVEL_24:0x1B9208 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_001B8B08[];
extern void func_08F748(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_08F9E0(char *buf);
extern int func_08F920(char *buf);

int func_1B9208(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_08F748(buf, v & 0xFFFFFFFCU, D_001B8B08, 0x28, 0, -1, 0);
    r = func_08F9E0(buf);
    if (r != -1) {
        return r;
    }
    return func_08F920(buf);
}
