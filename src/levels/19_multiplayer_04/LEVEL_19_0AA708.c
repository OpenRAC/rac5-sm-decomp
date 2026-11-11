/* LEVEL_19:0x0AA708 -- placement copy of LEVEL_16_0AAE30.c: formats a message from a table string and a stored offset, then forwards it to a display helper. */

extern char *func_10F9D0(int id);
extern unsigned short D_001ABC88;
extern int sprintf(char *s, const char *fmt, ...);
extern void func_098710(int a, int b, char *c);

void func_0AA708(int x, int y)
{
    char buf[128];
    char *fmt;

    fmt = func_10F9D0(0x317);
    sprintf(buf, fmt, x);
    func_098710(0xF0, (short)(D_001ABC88 + y), buf);
}
