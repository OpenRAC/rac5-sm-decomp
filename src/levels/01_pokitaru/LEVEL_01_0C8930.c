/* LEVEL_01:0x0C8930 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_0032BD90[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_135678(struct Obj *p);
extern char *func_1324B0(int id);
extern int func_133720(void);
extern void func_0D6F50(int a, char *text, char *title, int c);
extern void func_0D6F88(int a);

void func_0C8930(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_135678(p);
    buf = D_0032BD90;
    fmt = func_1324B0(0xA5B);
    a = func_133720();
    b = func_133720();
    sprintf(buf, fmt, a, b);
    func_0D6F50(2, buf, func_1324B0(0x218), 0);
    func_0D6F88(5);
}
