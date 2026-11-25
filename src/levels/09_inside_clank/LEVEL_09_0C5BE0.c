/* LEVEL_09:0x0C5BE0 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00313510[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_12E610(struct Obj *p);
extern char *func_12B448(int id);
extern int func_12C6B8(void);
extern void func_0D4200(int a, char *text, char *title, int c);
extern void func_0D4238(int a);

void func_0C5BE0(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_12E610(p);
    buf = D_00313510;
    fmt = func_12B448(0xA5B);
    a = func_12C6B8();
    b = func_12C6B8();
    sprintf(buf, fmt, a, b);
    func_0D4200(2, buf, func_12B448(0x218), 0);
    func_0D4238(5);
}
