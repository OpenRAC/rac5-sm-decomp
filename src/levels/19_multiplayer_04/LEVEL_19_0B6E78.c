/* LEVEL_19:0x0B6E78 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00279E50[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_1123E8(struct Obj *p);
extern char *func_10F9D0(int id);
extern int func_110B28(void);
extern void func_0C5F20(int a, char *text, char *title, int c);
extern void func_0C5F58(int a);

void func_0B6E78(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_1123E8(p);
    buf = D_00279E50;
    fmt = func_10F9D0(0xA5B);
    a = func_110B28();
    b = func_110B28();
    sprintf(buf, fmt, a, b);
    func_0C5F20(2, buf, func_10F9D0(0x218), 0);
    func_0C5F58(5);
}
