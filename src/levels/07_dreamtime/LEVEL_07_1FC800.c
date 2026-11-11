/* LEVEL_07:0x1FC800 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_001FC100[];
extern void func_0987D0(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_098A68(char *buf);
extern int func_0989A8(char *buf);

int func_1FC800(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_0987D0(buf, v & 0xFFFFFFFCU, D_001FC100, 0x28, 0, -1, 0);
    r = func_098A68(buf);
    if (r != -1) {
        return r;
    }
    return func_0989A8(buf);
}
