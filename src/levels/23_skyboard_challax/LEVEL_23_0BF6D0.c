/* LEVEL_23:0x0BF6D0 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_002FD1D0[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_126DF0(struct Obj *p);
extern char *func_123C28(int id);
extern int func_124E98(void);
extern void func_0CDD80(int a, char *text, char *title, int c);
extern void func_0CDDB8(int a);

void func_0BF6D0(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_126DF0(p);
    buf = D_002FD1D0;
    fmt = func_123C28(0xA5B);
    a = func_124E98();
    b = func_124E98();
    sprintf(buf, fmt, a, b);
    func_0CDD80(2, buf, func_123C28(0x218), 0);
    func_0CDDB8(5);
}
