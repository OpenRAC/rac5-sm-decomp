/* LEVEL_16:0x0B75A0 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00279CD0[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_111D48(struct Obj *p);
extern char *func_10F330(int id);
extern int func_110488(void);
extern void func_0C6648(int a, char *text, char *title, int c);
extern void func_0C6680(int a);

void func_0B75A0(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_111D48(p);
    buf = D_00279CD0;
    fmt = func_10F330(0xA5B);
    a = func_110488();
    b = func_110488();
    sprintf(buf, fmt, a, b);
    func_0C6648(2, buf, func_10F330(0x218), 0);
    func_0C6680(5);
}
