/* LEVEL_20:0x095360 -- placement copy of LEVEL_16_0AAE30.c: formats a message from a table string and a stored offset, then forwards it to a display helper. */

extern char *func_0E2118(int id);
extern unsigned short D_0010D1E8;
extern int sprintf(char *s, const char *fmt, ...);
extern void func_083578(int a, int b, char *c);

void func_095360(int x, int y)
{
    char buf[128];
    char *fmt;

    fmt = func_0E2118(0x317);
    sprintf(buf, fmt, x);
    func_083578(0xF0, (short)(D_0010D1E8 + y), buf);
}
