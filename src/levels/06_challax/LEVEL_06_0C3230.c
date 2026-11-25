/* LEVEL_06:0x0C3230 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00318B10[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_12BD48(struct Obj *p);
extern char *func_128B80(int id);
extern int func_129DF0(void);
extern void func_0D1850(int a, char *text, char *title, int c);
extern void func_0D1888(int a);

void func_0C3230(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_12BD48(p);
    buf = D_00318B10;
    fmt = func_128B80(0xA5B);
    a = func_129DF0();
    b = func_129DF0();
    sprintf(buf, fmt, a, b);
    func_0D1850(2, buf, func_128B80(0x218), 0);
    func_0D1888(5);
}
