/* LEVEL_24:0x0C21F8 -- placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_002F7C50[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_12B178(struct Obj *p);
extern char *func_127FB0(int id);
extern int func_129220(void);
extern void func_0D08A8(int a, char *text, char *title, int c);
extern void func_0D08E0(int a);

void func_0C21F8(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_12B178(p);
    buf = D_002F7C50;
    fmt = func_127FB0(0xA5B);
    a = func_129220();
    b = func_129220();
    sprintf(buf, fmt, a, b);
    func_0D08A8(2, buf, func_127FB0(0x218), 0);
    func_0D08E0(5);
}
