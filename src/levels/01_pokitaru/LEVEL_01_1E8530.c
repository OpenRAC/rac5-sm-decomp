/* LEVEL_01:0x1E8530 -- masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_001E7E30[];
extern void func_096948(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_096BE0(char *buf);
extern int func_096B20(char *buf);

int func_1E8530(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_096948(buf, v & 0xFFFFFFFCU, D_001E7E30, 0x28, 0, -1, 0);
    r = func_096BE0(buf);
    if (r != -1) {
        return r;
    }
    return func_096B20(buf);
}
