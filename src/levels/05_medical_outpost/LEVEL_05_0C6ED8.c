/* LEVEL_05:0x0C6ED8 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00317C50[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_130FF0(struct Obj *p);
extern char *func_12DE28(int id);
extern int func_12F098(void);
extern void func_0D54F8(int a, char *text, char *title, int c);
extern void func_0D5530(int a);

void func_0C6ED8(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_130FF0(p);
    buf = D_00317C50;
    fmt = func_12DE28(0xA5B);
    a = func_12F098();
    b = func_12F098();
    sprintf(buf, fmt, a, b);
    func_0D54F8(2, buf, func_12DE28(0x218), 0);
    func_0D5530(5);
}
