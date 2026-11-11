/* LEVEL_04:0x2016F0 -- placement copy of LEVEL_01_1E8530.c: masks and sets flag bits of its argument, formats a message into a buffer, and returns the helper result or the fallback result. */

extern char D_00200FF0[];
extern void func_099A40(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_099CD8(char *buf);
extern int func_099C18(char *buf);

int func_2016F0(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_099A40(buf, v & 0xFFFFFFFCU, D_00200FF0, 0x28, 0, -1, 0);
    r = func_099CD8(buf);
    if (r != -1) {
        return r;
    }
    return func_099C18(buf);
}
