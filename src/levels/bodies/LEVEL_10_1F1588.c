/* LEVEL_10:0x1F1588 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_001F0E88[];
extern void func_096CB8(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_096F50(char *buf);
extern int func_096E90(char *buf);

int func_1F1588(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_096CB8(buf, v & 0xFFFFFFFCU, D_001F0E88, 0x28, 0, -1, 0);
    r = func_096F50(buf);
    if (r != -1) {
        return r;
    }
    return func_096E90(buf);
}
