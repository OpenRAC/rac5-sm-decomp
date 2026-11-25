/* LEVEL_07:0x0CA990 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00341690[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_138678(struct Obj *p);
extern char *func_1354B0(int id);
extern int func_136720(void);
extern void func_0D8FB0(int a, char *text, char *title, int c);
extern void func_0D8FE8(int a);

void func_0CA990(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_138678(p);
    buf = D_00341690;
    fmt = func_1354B0(0xA5B);
    a = func_136720();
    b = func_136720();
    sprintf(buf, fmt, a, b);
    func_0D8FB0(2, buf, func_1354B0(0x218), 0);
    func_0D8FE8(5);
}
