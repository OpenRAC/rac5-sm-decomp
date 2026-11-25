/* LEVEL_17:0x0B6AE0 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_0026AFD0[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_1112C0(struct Obj *p);
extern char *func_10E8A8(int id);
extern int func_10FA00(void);
extern void func_0C5B88(int a, char *text, char *title, int c);
extern void func_0C5BC0(int a);

void func_0B6AE0(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_1112C0(p);
    buf = D_0026AFD0;
    fmt = func_10E8A8(0xA5B);
    a = func_10FA00();
    b = func_10FA00();
    sprintf(buf, fmt, a, b);
    func_0C5B88(2, buf, func_10E8A8(0x218), 0);
    func_0C5BC0(5);
}
