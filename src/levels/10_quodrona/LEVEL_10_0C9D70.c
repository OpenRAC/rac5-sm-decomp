/* LEVEL_10:0x0C9D70 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00335190[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_1334F8(struct Obj *p);
extern char *func_130310(int id);
extern int func_1315A0(void);
extern void func_0D8390(int a, char *text, char *title, int c);
extern void func_0D83C8(int a);

void func_0C9D70(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_1334F8(p);
    buf = D_00335190;
    fmt = func_130310(0xA5B);
    a = func_1315A0();
    b = func_1315A0();
    sprintf(buf, fmt, a, b);
    func_0D8390(2, buf, func_130310(0x218), 0);
    func_0D83C8(5);
}
