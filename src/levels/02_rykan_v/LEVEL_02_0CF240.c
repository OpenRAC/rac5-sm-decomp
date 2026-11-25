/* LEVEL_02:0x0CF240 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00343290[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_13BA28(struct Obj *p);
extern char *func_138860(int id);
extern int func_139AD0(void);
extern void func_0DD8E0(int a, char *text, char *title, int c);
extern void func_0DD918(int a);

void func_0CF240(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_13BA28(p);
    buf = D_00343290;
    fmt = func_138860(0xA5B);
    a = func_139AD0();
    b = func_139AD0();
    sprintf(buf, fmt, a, b);
    func_0DD8E0(2, buf, func_138860(0x218), 0);
    func_0DD918(5);
}
