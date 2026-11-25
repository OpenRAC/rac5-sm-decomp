/* LEVEL_21:0x0A8F78 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_002435D0[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0F4540(struct Obj *p);
extern char *func_0F1378(int id);
extern int func_0F25E8(void);
extern void func_0B7590(int a, char *text, char *title, int c);
extern void func_0B75C8(int a);

void func_0A8F78(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_0F4540(p);
    buf = D_002435D0;
    fmt = func_0F1378(0xA5B);
    a = func_0F25E8();
    b = func_0F25E8();
    sprintf(buf, fmt, a, b);
    func_0B7590(2, buf, func_0F1378(0x218), 0);
    func_0B75C8(5);
}
