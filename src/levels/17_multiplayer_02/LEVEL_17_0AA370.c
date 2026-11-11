/* LEVEL_17:0x0AA370 -- placement copy of LEVEL_16_0AAE30.c: formats a message from a table string and a stored offset, then forwards it to a display helper. */

extern char *func_10E8A8(int id);
extern unsigned short D_0019E108;
extern int sprintf(char *s, const char *fmt, ...);
extern void func_098378(int a, int b, char *c);

void func_0AA370(int x, int y)
{
    char buf[128];
    char *fmt;

    fmt = func_10E8A8(0x317);
    sprintf(buf, fmt, x);
    func_098378(0xF0, (short)(D_0019E108 + y), buf);
}
