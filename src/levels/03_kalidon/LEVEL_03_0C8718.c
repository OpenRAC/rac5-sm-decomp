/* LEVEL_03:0x0C8718 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00346C10[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_133A40(struct Obj *p);
extern char *func_130878(int id);
extern int func_131AE8(void);
extern void func_0D6D38(int a, char *text, char *title, int c);
extern void func_0D6D70(int a);

void func_0C8718(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_133A40(p);
    buf = D_00346C10;
    fmt = func_130878(0xA5B);
    a = func_131AE8();
    b = func_131AE8();
    sprintf(buf, fmt, a, b);
    func_0D6D38(2, buf, func_130878(0x218), 0);
    func_0D6D70(5);
}
