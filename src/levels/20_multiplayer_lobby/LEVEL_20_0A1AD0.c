/* LEVEL_20:0x0A1AD0 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_0019D510[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0E4B30(struct Obj *p);
extern char *func_0E2118(int id);
extern int func_0E3270(void);
extern void func_0B0B78(int a, char *text, char *title, int c);
extern void func_0B0BB0(int a);

void func_0A1AD0(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_0E4B30(p);
    buf = D_0019D510;
    fmt = func_0E2118(0xA5B);
    a = func_0E3270();
    b = func_0E3270();
    sprintf(buf, fmt, a, b);
    func_0B0B78(2, buf, func_0E2118(0x218), 0);
    func_0B0BB0(5);
}
