/* LEVEL_04:0x0CE148 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00346590[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_141AF8(struct Obj *p);
extern char *func_13E930(int id);
extern int func_13FBA0(void);
extern void func_0DC800(int a, char *text, char *title, int c);
extern void func_0DC838(int a);

void func_0CE148(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_141AF8(p);
    buf = D_00346590;
    fmt = func_13E930(0xA5B);
    a = func_13FBA0();
    b = func_13FBA0();
    sprintf(buf, fmt, a, b);
    func_0DC800(2, buf, func_13E930(0x218), 0);
    func_0DC838(5);
}
