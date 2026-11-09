/* LEVEL_16:0x0AAE30 -- formats a message from a table string and a stored offset, then forwards it to a display helper. */

extern char *func_10F330(int id);
extern unsigned short D_001AAB08;
extern int sprintf(char *s, const char *fmt, ...);
extern void func_098E80(int a, int b, char *c);

void func_0AAE30(int x, int y)
{
    char buf[128];
    char *fmt;

    fmt = func_10F330(0x317);
    sprintf(buf, fmt, x);
    func_098E80(0xF0, (short)(D_001AAB08 + y), buf);
}
