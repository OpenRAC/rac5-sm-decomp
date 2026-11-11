/* LEVEL_18:0x0A9E08 -- placement copy of LEVEL_16_0AAE30.c: formats a message from a table string and a stored offset, then forwards it to a display helper. */

extern char *func_10DFE0(int id);
extern unsigned short D_001ABF88;
extern int sprintf(char *s, const char *fmt, ...);
extern void func_097E90(int a, int b, char *c);

void func_0A9E08(int x, int y)
{
    char buf[128];
    char *fmt;

    fmt = func_10DFE0(0x317);
    sprintf(buf, fmt, x);
    func_097E90(0xF0, (short)(D_001ABF88 + y), buf);
}
